#include <bits/stdc++.h>  
using namespace std;
int main(){
    int n;
    cin >> n;

    int ans=0;
    for(int i=1; i<=10; i++){
        int div = n%i;
        if(div == 0){
            if(i > ans){
                ans = i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}