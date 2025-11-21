#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    int arr[n+1];

    for(int i = 1; i<=n; i++){
        cin >> arr[i];
    }

    int F[n+1];

    for(int i =1; i<=n; i++){
        F[i] = 0;
    }

    for(int i =1; i<=n; i++){
        if(F[i] == 0){
            F[arr[i]] = 1;
        }
    }

    int ans = 0;

    for(int i =1; i<=n; i++){
        if(F[i] == 0){
            ans++;
        }
    }


    cout << ans << endl;

    for(int i =1; i<=n; i++){
        if(F[i] == 0){
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
    }