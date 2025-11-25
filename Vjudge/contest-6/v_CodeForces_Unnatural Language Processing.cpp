#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        string s2(n,'c');  
        for(int i=0; i<n; i++){
            if(s[i] == 'a' || s[i]=='e') s2[i] = 'v';
            else s2[i]='c';
        }

        for(int i=0; i<n; i++){
            if(i+2 == n){
                cout << s[i] << s[i+1];
                break;
            }
            if(i+2 == n-1){
                cout << s[i] << s[i+1] << s[i+2];
                break;
            }
            if(s2[i+3] == 'v'){   
                cout << s[i] << s[i+1] << ".";
                i++;
            }
            else{
                cout << s[i] << s[i+1] << s[i+2] << ".";
                i+=2;
            }
        }
        cout << endl;
    }
    return 0;
}
