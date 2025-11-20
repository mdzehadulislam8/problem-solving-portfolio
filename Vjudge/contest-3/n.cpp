#include <iostream>
using namespace std;
int main (){
    int T,ea;
    cin >> T;

    int airline[T],pasenger[T];
    for(int i = 0; i<T; i++){
        cin >> airline[i] >> pasenger[i];

        if((pasenger[i] % 100) != 0 ){

            ea = ((pasenger[i] / 100) + 1);
        }else{
            ea = pasenger[i] / 100;
        }

        if(ea < airline[i]){
            cout << "0" << endl;
        }
        else if(ea == airline[i]){
            cout << "0" << endl;
        }else
        {
            cout << ea - airline[i] << endl;

        }

    }
return 0;
}
