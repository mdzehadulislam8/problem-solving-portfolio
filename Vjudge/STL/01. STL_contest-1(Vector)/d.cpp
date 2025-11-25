#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n1,n2,x;
    cin >> n1 >> n2;
    vector <int> arr;
    for(int i=0; i<n1; i++){
        cin >> x;
        arr.push_back(x);
        }
    int add = 0;
    for(int i=0; i<n1; i++){
        if(n2 == i+1){
            add = arr[i];
            break;
        }
    }
    int count = 0;
    for(int i=0; i<n1; i++){
        if(add <= arr[i] && arr[i] != 0){
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