#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<pair<string, string>> store;

    for(int i=0; i<n; i++){
        string a,b;
        cin >> a >> b;
        store.push_back({a,b});
    }

    int count = 1;

    for(int i=1; i<n; i++){
        int j;
        for(j=0; j<n; j++){
            if(store[i] == store[j]){
                break;
            }
        }
        if(j == i) count++;
    }

    cout << count << endl;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
