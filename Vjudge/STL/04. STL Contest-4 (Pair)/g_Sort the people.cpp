#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<pair<pair<string, string>,int>> line;

    for(int i=0; i<n; i++){
        string a,b;
        int c;
        cin >> a >> b >> c;

        line.push_back({{b,a},-c});
    }

    sort(line.begin(),line.end());

    for(auto &x : line){
    cout << x.first.second << " " << x.first.first << " " << -x.second << endl;
}
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}