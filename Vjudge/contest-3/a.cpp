#include <iostream>
using namespace std;
int main(){
    int n,T[100],X[100],Chefina = 10;
    cin >> n;

    for(int i = 1; i <=n; i++ ){
        cin >> T[i];
        X[i] = T[i] - Chefina;
    }

    for(int i = 1; i <=n; i++ ){
        cout << X[i] << endl;
    }

}
