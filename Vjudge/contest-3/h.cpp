#include <iostream>
using namespace std;
int main (){
    int T,N[200];

    cin >> T;

    for(int i = 0; i<T; i++){
        cin >> N[i];

        if((N[i] % 3) == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}