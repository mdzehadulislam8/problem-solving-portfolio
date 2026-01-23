#include <bits/stdc++.h>
using namespace std;

void solve2(){
    int n, h, l;
    cin >> n >> h >> l;

    vector<int> a(n);

    int count_h = 0;
    int count_l = 0;
    int ueful_numbers = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];

        bool is_h = (a[i] <= h);
        bool is_L = (a[i] <= l);

        if(is_h){
            count_h++;
        }
        if (is_L)
        {
            count_l++;
        }

        if(is_h || is_L){
            ueful_numbers++;
        }
        
    }

    int ans = min({count_h, count_l, ueful_numbers / 2});

                cout << ans << endl;
}


int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve2();
    }

    return 0;
}
