#include <iostream>
using namespace std;
int main (){

    int T;
    cin >> T;

    int X[T],Y[T],Z[T],store[T],hourWork[T];
    for(int i = 0; i<T; i++){
        cin >> X[i] >> Y[i] >> Z[i]; 

         store[i] = X[i] * Y[i]; 

         hourWork[i] = 60 * Z[i] * 24;

        if(hourWork[i] >= store[i]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
   
    
return 0;
}
