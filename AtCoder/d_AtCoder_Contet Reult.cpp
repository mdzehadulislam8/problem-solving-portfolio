#include <iostream>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;

    int a[n], b[n], add=0;

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    for(int j = 0; j<m; j++){
         cin >> b[j];
    }

     for(int k = 0; k<m; k++){
         add += a[b[k] - 1];
    }
   
    cout << add << endl;
    
    return 0;
    }
