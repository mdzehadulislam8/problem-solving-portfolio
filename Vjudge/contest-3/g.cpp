#include <iostream>
using namespace std;
int main (){
    int N,X,store[675],sum = 0;

    cin >> N >> X;

    for(int i = 0; i<N; i++){
        cin >> store[i];

        if(X >= store[i]){

            sum += store[i];
        }
    }

   // for(int j = 0; j<N; i++){
        cout << sum << endl;
  //  }
}