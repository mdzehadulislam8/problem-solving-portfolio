#include <iostream>
using namespace std;
int main(){

    string s;
    cin >> s;

    string store;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '0'){
            store.push_back('1');
        }else{
            store.push_back('0');
        }
    }

    cout << store << endl;

    return 0;
}
