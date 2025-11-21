#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    long long n; 
    cin >> n;

    long long t1,t2,jog = 0;

    while(n--){
        cin >> t1;

        for(long long i = 0; i<t1; i++){
            cin >> t2;
             jog += t2;
        }

        long long root = sqrt(jog);

        cout << root << endl;

    if (root * root == jog) {
        cout << "YES" << endl;
    } else {
        cout << "No" << endl;
    }
        jog = 0;

        
 
    }

    return 0;
    }