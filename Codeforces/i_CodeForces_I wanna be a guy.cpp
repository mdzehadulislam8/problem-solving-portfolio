#include <bits/stdc++.h>
using namespace std;

void solve(){
    set<int>joma;


    int n;
    cin>>n;

    int p1;
    cin >> p1;

        for(int i=1; i<=p1; i++){
            int x;
            cin >> x;
            joma.insert(x);
        }

        int p2;
        cin >> p2; 
        for(int i=1; i<=p2; i++){
            int x;
            cin >> x;
            joma.insert(x);
        }
        
        int count = 0;
        for(int i=1; i<=n; i++){
            if(joma.find(i) == joma.end()){
                count ++;
                break;
            }
        }

        if(count == 0){
            cout << "I become the guy." << endl;
        }else{
            cout << "Oh, my keyboard!" << endl;
        }
    
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}