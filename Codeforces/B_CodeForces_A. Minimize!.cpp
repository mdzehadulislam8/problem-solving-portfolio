#include <bits/stdc++.h>  
using namespace std;
int main(){
    
  int n;
  cin >> n;

  int a[n],b[n];

  for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];

        int ans = 0;
        
        int sum = a[i] + b[i];
        int c = sum/2;

        ans = (c-a[i]+b[i]-c);
        cout << ans << endl;

        ans = 0;
        c = 0;
    }
    return 0;
}