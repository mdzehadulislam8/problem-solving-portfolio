#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t; 

    int x[t],y[t],z[t];

    for(int i = 0; i<t; i++){
        cin >> x[i] >> y[i] >> z[i];

        int store = x[i] * y[i];
        int account = store - z[i];

        if(z[i] > account){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }

    }

return 0;
}