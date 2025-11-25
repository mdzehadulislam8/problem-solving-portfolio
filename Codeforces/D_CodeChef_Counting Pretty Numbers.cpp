#include <bits/stdc++.h>  
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int l,r;
        int ans = 0;
        cin >> l >> r;
        for(int j = l; j<=r; j++){
            int div = j%10;
            if(div == 2 || div == 3 || div == 9){
                ans++;
            }
        }
            cout << ans << endl;
            ans = 0;
    }

    return 0;
}