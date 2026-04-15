#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n>>m;

    set<string> s;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        s.insert(str);
    }
    
    int count = 0;
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;

        if (s.find(str) != s.end()) {
           count++; 
        }
    }
    cout<< count;
}