#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin >> t;

    while(t--){
        map <long long, bool> gotSum;
        bool isYes = false;
        long long sum = 0;
        gotSum[0] = true;

        int n; 
        cin >> n;

        for(int i=0,x; i<n; i++){
            cin >> x;
            
            if(i % 2){
                x *= -1;
            }
            sum += x;

            if(gotSum[sum] == true){
                isYes = true;
            }
            gotSum[sum] = true;
        }
        if(isYes == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
