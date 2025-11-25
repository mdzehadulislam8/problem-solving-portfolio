#include <bits/stdc++.h>
using namespace std;
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int n;
  cin >> n;

  vector<int>a(n);

  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  int count1 = 1, count2 = 1;
  for(int i=0; i<n; i++){
    if(a[i-1] <= a[i]){
        count1++;
    }else{
        count1 = 1;
    }
    if(count1>count2){
            count2 = count1;
        }
  }
  cout << count2 << endl;

  return 0;

}