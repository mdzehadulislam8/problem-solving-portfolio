#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int m,count = 0;
 
        m = n;
 
        while(m > 0){
            int last_digit = m % 10;
            m /= 10;
 
            if(last_digit > 0){
                count ++;
            }
        }
        cout << count << endl;
 
        int mul = 1;
 
        while(n > 0){
            int last_digit = n % 10;
            n /= 10;
 
            if(last_digit != 0){
                cout << last_digit * mul << " ";
            }
            
            mul *= 10;
        }
        cout << endl;
 
 
    }
 
return 0;
}


