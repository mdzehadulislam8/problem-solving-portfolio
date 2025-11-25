#include <iostream>
using namespace std;
int main(){

    int l,r;
    cin >> l >> r;

    string s;
    cin >> s;

    l--; r--;

    for(int i=0; i<=l-1; i++){
        cout << s[i];
    }

    for(int i=r; i>=l; i--){
        cout << s[i];
    }

    for(int i=r+1; i<s.length(); i++){
        cout << s[i];
    }

    cout << endl;

    return 0;
}