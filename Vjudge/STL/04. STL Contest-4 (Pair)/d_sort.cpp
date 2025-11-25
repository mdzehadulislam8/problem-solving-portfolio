#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<pair<pair<int, int>,int>> data;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;

        data.push_back({{a,b},c});
    }

    sort(data.begin(),data.end());

    for(auto &item : data){
        cout << item.first.first << " ";
        cout << item.first.second << " ";
        cout << item.second << endl;
    }
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}