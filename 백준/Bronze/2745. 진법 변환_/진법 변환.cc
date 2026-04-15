#include <iostream>
#include <string>

using namespace std;

int main(){
    string n;
    int b;
 
    cin >>n>>b;
    int result = 0;

    for(int i = 0; i< n.length(); i++){
        int digit;
        if(n[i] >= '0' && n[i] <= '9')
            digit = n[i] - '0';
        else
            digit = n[i] - 'A' + 10;
        result = result * b + digit;
    }
    
    cout << result <<endl;
    
}