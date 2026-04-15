#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        if (binary_search(arr.begin(), arr.end(), x)) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }
}