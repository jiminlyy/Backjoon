#include <iostream>
using namespace std;

int main(){
    int v, a, b;
    cin >> a >> b >> v;

    int day = (v - a) / (a - b);

    if ((v - a) % (a - b) != 0)
        day++;

    day++;  

    cout << day << endl;
}