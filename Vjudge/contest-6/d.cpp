#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    cin >> a;


    for(int i = 0; i<a; i++){

    string s;
    char sw;
    cin >> s;
        if(s == "abc"){
            cout << "YES" << endl;
        }else if(s == "acb"){
            sw = s[1];
            s[1] = s[2];
            s[2] = sw;
            if(s == "abc"){
                cout << "YES" << endl;
            }
        }else if(s == "bac"){
            sw = s[0];
            s[0] = s[1];
            s[1] = sw;
             if(s == "abc"){
            cout << "YES" << endl;
        }
        }else if(s == "bca"){
            cout << "NO" << endl;
        }else if(s == "cab"){
            cout << "NO" << endl;
        }else{
        cout << "YES" << endl;}


    }


    return 0;
}


