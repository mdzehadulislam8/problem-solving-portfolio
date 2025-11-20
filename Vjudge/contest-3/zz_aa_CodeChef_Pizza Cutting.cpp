#include <bits/stdc++.h>
using namespace std;
int main (){

   int t;
   cin >> t;

   int n;

   while(t--){
    cin >> n;

    if(n == 1){
        cout << "YES" << endl;
    }else if (n > 1) {

        if(n % 2 == 0){
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    
    }
   }
return 0;
}