#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long t,j,i,store;

    cin >> t;

    long long a, b;
    for ( i = 1; i <= t; i++) {

        cin >> a >> b; 

        for(j = 1; j<=a; j++){

         store = b * j;

        if(store > a ){
            break;
        }

    }

    int add = store - a;

    cout << add << endl;
        
    }
    



    }
