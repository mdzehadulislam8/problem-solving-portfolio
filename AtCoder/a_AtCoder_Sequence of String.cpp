#include <bits/stdc++.h>
using namespace std;
void solve(){
  
    int n;
    cin >> n;

    vector<string>s(n);

    for(int i = 0; i<n; i++){
        cin >> s[i];
    }

    reverse(s.begin(),s.end());

    for(string w : s){
        cout << w << endl;
    }

}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}