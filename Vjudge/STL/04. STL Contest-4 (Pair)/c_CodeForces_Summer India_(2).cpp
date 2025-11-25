#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<pair<string, string>> store;
    set<pair<string, string>> uniqueLeaves; 

    for(int i=0; i<n; i++){
        string a,b;
        cin >> a >> b;

        store.push_back({a,b});
    }

    for(int i=0; i<n; i++){
        uniqueLeaves.insert(store[i]);  
    }

    cout << uniqueLeaves.size() << endl;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
