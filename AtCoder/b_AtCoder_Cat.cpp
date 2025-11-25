#include <bits/stdc++.h>
using namespace std;
void solve(){
  
    int n;
    cin >> n;

    string s;
    cin >> s;

    string work;
    int count=0;

    for(int i = 0; i<n; i++){
        if(s[i] == 'n' && i+1<n && s[i+1] == 'a'){
            work += "nya";
            i++;
            count++;
        }else{
            work.push_back(s[i]);
        }
    }

    if(count > 0) cout << work << endl;
    else cout << s << endl;
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}