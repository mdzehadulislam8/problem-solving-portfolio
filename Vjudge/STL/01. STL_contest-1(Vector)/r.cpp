#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    vector<int>a(n);
    vector<int>b(n);

    for(auto &x:a){
        cin>>x;
    }

    for(auto &x:b){
        cin>>x;
    }

    int mxa=*max_element(a.begin(),a.end());
    int mxb=*max_element(b.begin(),b.end());
    cout<<mxa+mxb << endl;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
