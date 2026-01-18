#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> store(n+1);

    for(int i=1; i<=n; i++){
        cin >> store[i];

        for(int j=1; j<=store[i]; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
