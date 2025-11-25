#include <bits/stdc++.h>
using namespace std;
void solve(){
  int q;
  cin >> q;
  
  vector<int>a;

  while(q--){
    int t;
    cin>>t;

    if(t==0){
        int x;
        cin>>x;
        a.push_back(x);
    }else if(t==1){
        int p;
        cin >> p;
        
        cout << a[p] << endl;

    }else{
         a.pop_back();
    }
}
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}