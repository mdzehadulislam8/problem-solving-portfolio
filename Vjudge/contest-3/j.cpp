#include <iostream>
using namespace std;
int main (){
   int T, X1[200],X2[200],store[200];
   
   cin >> T;

   for(int i = 0; i<T; i++){

        cin >> X1[i] >> X2[i];


        if(X1[i] <= X2[i]){

            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }


}