#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    while(n--){

    int t,k;
    cin >> t >> k;

    int a[t];

    for(int i = 0; i<t; i++){
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i<t; i++){
        if(a[i] == k){
            ans = 1;
            break;
        }
    }

    if(ans == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    ans = 0;

}

    return 0;
    }