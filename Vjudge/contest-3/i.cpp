#include <iostream>
using namespace std;
int main (){
   int T, X1[200],X2[200],store[200];
   
   cin >> T;

   for(int i = 0; i<T; i++){
    //for(int j = 0; j<T; j++){
        cin >> X1[i] >> X2[i];


        store[i] = X1[i] <= X2[i];
    }
 //  }

   for(int i = 0; i<T; i++){
    cout << store[i] << endl;
   }
}