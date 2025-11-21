#include <iostream>
using namespace std;
int main(){

    int n, k;
    cin >> n >> k;

    int a[n], joma[n];
  

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

      int f = n - k;

        for(int j = f; j<n; j++){
            joma[j] = a[j];
            cout << joma[j] << " ";
        }

         for(int j = 0; j<f; j++){
           cout << a[j] << " ";
        }
    

    return 0;
    }
