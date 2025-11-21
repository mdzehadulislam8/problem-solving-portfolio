#include <iostream>
using namespace std;
int main(){
   
    int n1;
    cin >> n1;

    while(n1--){

        int n2;
        cin >> n2;

    int a[n2];

    for(int i = 0; i<n2; i++){
        cin >> a[i];
    }

    int multiplay = 1, target;
    int min = 10000;

    for(int j = 0; j<n2; j++){
        if(a[j] <= min){
            min = a[j];
            target = j;
        }
    }

    int min_sum = min + 1;

    for(int h = 0; h<n2; h++){
        if(h == target){
            multiplay *= min_sum;
        }else{
            multiplay *= a[h];
        }
    }

    cout << multiplay << endl;

    min = 10000;
    multiplay = 1;

}

    return 0;
    }