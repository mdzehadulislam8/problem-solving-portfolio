#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    cin >> s;

    reverse(s.begin(), s.end());

    for(int i = 0; i<1; i++){
        s[0] = '4';

    }
    reverse(s.begin(), s.end());

    cout << s <<endl;

    return 0;
}

