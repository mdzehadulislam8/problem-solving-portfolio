#include <iostream>
using namespace std;

int main() {

    int n, a1[200], result;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin >> a1[i] ;
    }

    int se, add = 0;

    for(int i = 0; i<n; i++){

        if(a1[i] != i){
        se = i;
        break;
        }}

   for(int i = 0; i<n; i++){
    if(a1[i] != i ){

                add += a1[i] ;

        }
    }

       result = add + se;


    cout << result;

    }
