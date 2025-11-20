#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, m;
    cin >> n >> k >> m;

    int a[n];
    int add = 0;
    for(int i = 0; i < n-1; i++){
        cin >> a[i];
        add += a[i];
    }

    int total_required = m * n;
    int needed = total_required - add;

    if(needed < 0) needed = 0;
    if(needed > k) cout << -1 << endl;
    else cout << needed << endl;

    return 0;
}
