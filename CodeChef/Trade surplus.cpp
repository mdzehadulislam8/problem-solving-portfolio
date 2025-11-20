#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;

    int A1[t],A2[t];
    int B1[t],B2[t];

    for(int i = 0; i<t; i++){
        cin >> A1[i] >> A2[i] >> B1[i] >> B2[i];

        int net_export_A = A1[i] - A2[i];
        int net_export_B = B1[i] - B2[i];

        int combine = net_export_A + net_export_B;

        if(combine < 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        }

return 0;
}