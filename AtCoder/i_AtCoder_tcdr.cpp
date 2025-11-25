#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, s2;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            s2.push_back(s[i]);
        }
    }

    cout << s2 << endl;

    return 0;
}