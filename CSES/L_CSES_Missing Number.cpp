#include <iostream>
using namespace std;
int main(){
    int n; 
    cin >> n;

    int a[n];
    int count[n];

    for(int i = 1; i<=n; i++){
        count[i] = 0;
    }

    for(int i = 1; i<=n-1; i++){
        cin >> a[i];

        count[a[i]]++;
    }

    for(int j = 1; j<=n; j++){
        if(count[j] == 0){
            cout << j << endl;
            break;
        }
    }
    return 0;
    }