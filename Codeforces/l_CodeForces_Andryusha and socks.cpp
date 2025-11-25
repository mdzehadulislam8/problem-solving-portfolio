#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    n*=2;

    set<int>store;

    int ans = 0;

    while(n--){
        int x; cin>> x;
        if(store.count(x)){
            store.erase(x);
        } else{
            store.insert(x);
        }
        if(store.size()>ans){
            ans=store.size();
        }
    }
    cout<<ans<<endl;
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}