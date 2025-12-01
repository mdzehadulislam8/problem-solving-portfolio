#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(mp[s]==0){
            cout << "OK" << "\n" ;
            mp[s]=1;
        }
        else{
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }
    
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}