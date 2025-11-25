#include <bits/stdc++.h>
using namespace std;

void solve(){
    pair <int,int> s;

    cin >> s.first >> s.second;

    int store = s.first + s.second + (s.first * s.second);

    if(store == 111) cout << "Yes" << endl;
    else cout << "No" << endl;
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}