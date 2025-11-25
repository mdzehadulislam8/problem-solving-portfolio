#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        string s;
        cin >> s;


        for (auto &ch : s) {
            ch = tolower(ch);
        }

        if (s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
