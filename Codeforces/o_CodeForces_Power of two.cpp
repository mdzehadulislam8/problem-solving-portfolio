#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;

    vector<int> store(n+1);

    for(int i=1; i<=n; i++){
        cin >> store[i];
    }

    map <int, int> cnt;
    long long ans = 0;
    for(int i=1; i<=n; i++){
        for(int p=0; p<=30; p++){
            int sum = (1 << p);
            int need = sum - store[i];
            ans += cnt[need];
        }
        cnt[store[i]]++;
    }

    cout << ans << endl;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
