#include <iostream>
#include <string>

using namespace std;


int main(){
    string w;
    cin >> w;
    int count =0;
    for(int i =0; i< w.length(); i++ ){
        if(w[i] == 'c'){
            i++;
            if(w[i]=='='){
                count++;
            }
            else if(w[i] =='-'){
                count++;
            }
            else{
                i--;
                count++;
            }
        }
        else if(w[i] == 'd'){
            i++;
            if(w[i] == 'z'){
                i++;
                if(w[i] == '='){
                    count++;
                }
                else{
                    i--;
                    count = count +2;
                }
            }
            else if(w[i] == '-'){
                count++;
            }
            else{
                i--;
                count++;
            }
        }
        else if(w[i] == 'l'){
            i++;
            if(w[i]=='j'){
                count++;
            }
            else{
                i--;
                count++;
            }
        }
        else if(w[i] == 'n'){
            i++;
            if(w[i]=='j'){
                count++;
            }
            else{
                i--;
                count++;
            }
        }
        else if(w[i] == 's'){
            i++;
            if(w[i]=='='){
                count++;
            }
            else{
                i--;
                count++;
            }
        }
        else if(w[i] == 'z'){
            i++;
            if(w[i]=='='){
                count++;
            }
            else{
                i--;
                count++;
            }
        }
        else {
            count++;
        }
    }
    cout << count;
    return 0;
}