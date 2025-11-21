#include <iostream>
using namespace std;
int main(){

    int k[1000];

    for(int i = 0; i<8; i++){
        cin >> k[i];
        
    }

    int count = 0;

     for(int i = 0; i<7; i++){
      int index1 = k[i], index2 = k[i+1];
     
      if(index1 <= index2 && index1>=100 && index2 >= 100 && index1 <= 675 && index2 <= 675 && index1 % 25 == 0 && index2 % 25 == 0){
        count ++;
      }
    }

    if(count == 7){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    
    return 0;
    }
