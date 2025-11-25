#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;

  vector<int>a(n);

  for(int i=0; i<n; i++){
    cin>>a[i];
  }

sort(a.begin(), a.end());
int count = 0;
for(int i=0; i<n; i++){
  if(count < a[i]){
    count++;
  }
}

  cout << count << endl;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
