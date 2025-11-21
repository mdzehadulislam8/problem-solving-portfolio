#include <iostream>
using namespace std;
int main(){
    int n,d;
    cin >> n >> d;
    
    int t[n], sum = 0;

    for(int i = 0; i<n; i++){
        cin >> t[i];
    }

    int final = -1;
    for(int i = 0 ; i<n-1; i++){
        int a1 = t[i], a2 = t[i+1];

        if(a2 - a1 <= d){
            final = a2;
            break;
        }
    }

    cout << final << endl;


    return 0;
    }
