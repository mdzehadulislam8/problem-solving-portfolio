#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    int count = 0;

    for(int i = 1; i<=s.length(); i++){
        if(i % 2 == 1){
        if(s[i] == '1'){
            count ++;
            break;
        }
        }
    }

    if(count == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}