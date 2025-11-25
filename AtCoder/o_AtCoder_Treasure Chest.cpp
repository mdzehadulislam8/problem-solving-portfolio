#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0, flag = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '|'){
           count++;
        }
        if(s[i] == '*'){
            if(count == 1){
                flag = 1;
            }else{
                flag = 0;
            }
            break;
        }
        }

    if(flag == 1){
        cout << "in" << endl;
    }else{
        cout << "out" << endl;
    }

    return 0;
}
