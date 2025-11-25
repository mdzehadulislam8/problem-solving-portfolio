#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    vector<int>h(n);

    for(auto &x:h){
        cin>>x;
    }

    int count = 0;
    for(int i=1; i<n; i++){
        if(h[i] > h[0]){
            cout<<i+1<<endl;
            count++;
            break;
        }
    }

    if(count==0){
        cout << "-1" << endl;
    }
    
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
