#include <iostream>
using namespace std;
int main(){

    int N,another,div,rem[100000000];

    cin >> N;



   for(int i = 0; i<N; i++){
    div = N/2;
    rem[i] = N%2;
    if(div != 0){
        another = div/2;
        rem[i] = div%2;
        N = another;
    }else{

        break;

    }
   }

}
