#include <bits/stdc++.h>
using namespace std;

void solve(){
    set<int>joma;

    int n;
    cin>>n;

    while(n--){
        int x;
        cin>>x;
        joma.insert(x);
    }

    int targetIndex = 1;
    int index = 0;
    int count = 0;
    for (auto val : joma) {
        if (index == targetIndex) {
            cout << val << endl;
            count++;
            break;
        }
        index++;
    }

    if(count == 0){
        cout << "NO" << endl;
    }
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}