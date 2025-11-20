#include <iostream>
using namespace std;
int main (){
    int n, T[200];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> T[i];
        if(T[i] > 24){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

}