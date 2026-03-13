#include <iostream>
#include <string>

using namespace std;

int main() {
    int k;
    cin >> k;

    int count = 0;

    for (int i = 0; i < k; i++) {
        int alpha[26] = {0};
        string a;
        cin >> a;

        bool group = true;
        alpha[a[0] - 'a'] = 1;

        for (int j = 1; j < a.length(); j++) {
            int c = a[j] - 'a';

            if (a[j] != a[j - 1]) {
                if (alpha[c] == 1) {
                    group = false;
                    break;
                }
                alpha[c] = 1;
            }
        }

        if (group) {
            count++;
        }
    }

    cout << count;
    return 0;
}
