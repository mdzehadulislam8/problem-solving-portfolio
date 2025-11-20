#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;

    while(t--){
    int n,x,d;
    cin >> n >> x >> d;

    int y = 5*x;

    int m = n/y;

    int ans = m + d;

    cout << ans << endl;

    }
    
return 0;
}