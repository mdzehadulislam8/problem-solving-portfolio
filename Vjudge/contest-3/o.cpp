#include <iostream>
using namespace std;
int main (){

   int T;
   cin >> T;
   
   int S[T],STORE[T];

   for(int i = 0; i<T; i++){
    cin >> S[i];

    STORE[i] = 24 * S[i] * 1000;

   }

   for(int j = 0; j < T; j++){
    cout << STORE[j] << endl;
   }
    
return 0;
}
