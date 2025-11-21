#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

 

   for(int j = 0; j<t; j++){

        int n;
       
        cin >> n; 

        int a[n],count = 0;

        for(int i = 0; i<n; i++){
            cin >> a[i];

            if(a[i] % 2 != 0){
                count ++;
            }
        }
        cout << count << endl;
        count = 0;
    }

    }
