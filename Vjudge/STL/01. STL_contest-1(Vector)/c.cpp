#include <bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for(int i=1; i<=t; i++)

void solve(){
    int n,x;
    cin >> n;

    vector <int> arr;

    for(int i=0; i<n; i++){
        cin >> x;
        arr.push_back(x);
        }

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}