#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;

  vector<int>arr(n);

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int x;
  cin>>x;

  int a,b;
  cin>>a>>b;

  arr.erase(arr.begin()+x-1);
  arr.erase(arr.begin()+a-1, arr.begin()+b-1);

  cout << arr.size() << endl;

  for(int d : arr) cout << d << " ";

}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}