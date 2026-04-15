#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >>m >>n;
    
    int sum = 0;
    int min = n;
    for(int i = m; i<=n; i++){
        if(i<2) continue;
        bool prime = true;
        
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            if(min>i){
                    min = i;
            }
            sum += i;
        }
    }
    if(sum ==0){
        cout <<"-1"<<endl;
    }
    else{
    cout << sum <<endl;
    cout << min <<endl;
    }
}