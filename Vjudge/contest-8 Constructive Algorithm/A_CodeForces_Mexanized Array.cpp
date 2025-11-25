#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k,x;
        cin >> n >> k >> x;

        if(k>n || x<k-1){
            cout << "-1"<< endl;
        }else{
            int ans = k*(k-1)/2;
            if(k==x) x--;
            ans+=(n-k)*x;
            cout << ans << endl;
        }
    }
    return 0;
}