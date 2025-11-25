#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,q;
  cin >> n >> q;
  
  vector<int>a[n];

  while(q--){
    int t;
    cin >> t;
     if(t==0){
        int x;
        cin >>t >> x; //kon vector vitor index rakhbo oita t ar x hoche ki value rakhbo
        a[t].push_back(x); // sei index e x value ta rakha hocche
     }else if(t==1){
        cin >> t; // kon index all value dekhte cacchi seta dicchi
        int m = a[t].size(); 
        for(int i=0; i<m; i++){
            cout << a[t][i];
            if(i!=m-1){
                cout<<" ";
            }
        }
        cout << endl;
     }else{
        cin >> t; // vector kon index ta ami clear dicchi seta select kora
        a[t].clear();
     }
  }
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}