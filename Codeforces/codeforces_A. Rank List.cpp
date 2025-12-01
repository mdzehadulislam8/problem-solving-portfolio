#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }


    sort(v.begin(), v.end(), [&](auto &a, auto &b){
        if(a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });


    pair<int,int> target = v[k-1];

    int cnt = 0;
    for(auto &x : v){
        if(x == target) cnt++;
    }

    cout << cnt << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
