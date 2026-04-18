#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    set<string> heard;
    vector<string> result;

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        heard.insert(name);
    }

    for (int i = 0; i < M; i++) {
        string name;
        cin >> name;
        if (heard.find(name) != heard.end()) {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }

    return 0;
}