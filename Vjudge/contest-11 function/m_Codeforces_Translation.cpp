#include <bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for(int i=1; i<=t; i++)

void solve(){
    string t;
    cin >> t;
 
    string s2 = t;
    reverse(s2.begin(), s2.end());

    string s;

    cin >> s;

    if(s2 == s){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}