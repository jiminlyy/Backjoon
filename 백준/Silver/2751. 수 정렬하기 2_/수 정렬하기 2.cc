#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    // 동적 할당이나 std::vector를 사용하는 것이 더 안전하지만,
    // 문제에서 배열 크기를 줬다면 static으로 선언해도 됩니다.
    // 여기서는 100만개이므로 static으로 선언하거나 전역 변수로 빼는 것이 좋습니다.
    // (main의 스택 오버플로우 방지)
    static int arr[1000000]; 

    // 1. 일단 모두 입력받기 (O(n))
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 2. 정렬하기 (O(n log n))
    sort(arr, arr + n);

    // 3. 중복 확인하기 (O(n))
    bool has_duplicate = false;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            has_duplicate = true;
            break; // 중복 찾으면 바로 종료
        }
    }

    // 4. 문제의 요구사항에 따라 처리
    if (has_duplicate) {
        // 원래 코드처럼 중복이 있으면 0 리턴 (종료)
        return 0; 
    } else {
        // 중복이 없으면 정렬된 배열 출력
        for (int i = 0; i < n; i++) {
            cout << arr[i] << '\n'; // endl보다 '\n'이 더 빠릅니다.
        }
    }
    
    // 입출력 속도 향상을 위해 다음 두 줄을 main 처음에 추가하는 것도 좋습니다.
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
}