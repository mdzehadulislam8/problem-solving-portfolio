#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;

    int n[t],x[t],extra;

    for(int i = 0; i<t; i++){
        cin >> n[i] >> x[i];

        if(n[i] == x[i]){
            cout << "0" << endl;
        }else if (n[i] > x[i]){
             cout << "0" << endl;
        }else if (n[i] < x[i]){
            extra = x[i] - n[i];
            extra *= 2;
            cout << extra << endl;
        }
    }

return 0;
}