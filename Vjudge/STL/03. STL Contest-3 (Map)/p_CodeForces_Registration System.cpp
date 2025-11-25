#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map <string, int> frq;


    for(int i=0; i<n; i++){
        string a;
        cin >> a;

        frq[a]++;

        if(frq[a] == 1){
             cout << "OK"  << endl;
        }else{
           cout << a << frq[a]-1 << endl;
        }
    }

    

}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
