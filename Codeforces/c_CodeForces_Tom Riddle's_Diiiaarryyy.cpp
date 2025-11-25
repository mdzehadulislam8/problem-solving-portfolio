#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map <string, bool> allnames;

    while(n--){
        string name;
        cin >> name;
        if(allnames[name] == true) cout << "YES" <<endl;
        else cout << "NO" << endl;
        allnames[name] = true;
    }
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
