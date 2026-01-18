#include <bits/stdc++.h>
using namespace std;

int prefixValue(const vector<int>& v) {
    int mx = 0, sum = 0;
    for (int x : v) {
        mx = max(mx, x);
        sum += mx;
    }
    return sum;
}

void solve() {
    int t;
    cin >> t;

    vector<vector<int>> joma(t); 

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        joma[i].resize(n);
        for (int j = 0; j < n; j++) cin >> joma[i][j];
    }


    for (int i = 0; i < t; i++) {
        vector<int> a = joma[i];
        int n = a.size();

        int ans = prefixValue(a);

      
        for (int p = 0; p < n; p++) {
            for (int q = p+1; q < n; q++) {
                swap(a[p], a[q]);
                ans = max(ans, prefixValue(a));
                swap(a[p], a[q]); 
            }
        }

        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
