#include <iostream>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){
   
    int n;
    cin >> n;

    int a[n],count[n];

    for(int i = 1; i<=n; i++){
        count[i] = 0;
    }

    for(int i = 1; i<=n; i++){
        cin >> a[i];

        count[a[i]]++;
    }

    int result = 0;

    for(int j=1; j<=n; j++){
        if(count[j] >= 3){
            cout << j << endl;
            result = 1;
            break;
        }
    }

    if(result == 0){
        cout << "-1" << endl;
    }

    for(int i = 1; i<=n; i++){
        count[i] = 0;
    }

    result = 0;
}

    return 0;
    }