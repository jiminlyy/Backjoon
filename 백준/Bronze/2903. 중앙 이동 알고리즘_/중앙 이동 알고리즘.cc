#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int side = 2;
    int add = 1;

    for(int i = 0; i < n; i++){
        side += add;
        add *= 2;
    }
    int result = side*side;
    cout << result << endl;
}