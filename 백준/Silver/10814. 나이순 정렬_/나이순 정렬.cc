#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<pair<int, string>> arr;

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        int age;
        string name;

        ss >> age >> name;
        arr.push_back({age, name});
    }

    stable_sort(arr.begin(), arr.end(), [](pair<int, string> a, pair<int, string> b) {
        return a.first < b.first;
    });

    for (int i = 0; i < n; i++) {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}