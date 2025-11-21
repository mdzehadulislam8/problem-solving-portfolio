#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;

    int week = n * 7;

    int a[week];

    int count = 0, total = 7, sum = 0;

    for(int i = 1; i<=week; i++){
        cin >> a[i];


        if(count != total){

            sum += a[i];

            count ++;

            if(count == total){
                cout << sum << " ";
                sum = 0;
                count = 0;
            }
        }
    }
    return 0;
    }
