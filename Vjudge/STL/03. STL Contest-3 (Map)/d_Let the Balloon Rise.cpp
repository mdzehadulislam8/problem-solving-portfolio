#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map <string, bool> store;

    while(n--){
        string name;
        cin >> name;
        if(store[name] == true) cout << "YES" << endl;
        else cout << "NO" << endl;
        store[name] = true;
    }

}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
