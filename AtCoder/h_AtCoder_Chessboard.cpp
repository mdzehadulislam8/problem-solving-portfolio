#include <iostream>
using namespace std;

int main() {

    char s[8][8];

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin >> s[i][j];
        }
    }


    for(int i=0; i<8; i++){
        int count = 0;
        for(int j=0; j<8; j++){
            
            if(s[i][j] == '*'){
                if(j == 0){
                    count = 1;
                }
                else if(j == 1){
                    count = 2;
                }else if(j == 2){
                    count  = 3;
                }else if(j == 3){
                    count = 4;
                }else if(j == 4){
                    count = 5;
                }else if(j == 5){
                    count = 6;
                }else if(j == 6){
                    count = 7;
                }else if(j == 7){
                    count = 8;
                }
            }
        }
        int k = 8 - i;
        if(count == 1){
            cout << "a" << k << endl;
        }else if(count == 2){
            cout << "b" << k << endl;
        }else if(count == 3){
            cout << "c" << k << endl;
        }else if(count == 4){
            cout << "d" << k << endl;
        }else if(count == 5){
            cout << "e" << k << endl;
        }else if(count == 6){
            cout << "f" << k << endl;
        }else if(count == 7){
            cout << "g" << k << endl;
        }else if(count == 8){
            cout << "h" << k << endl;
        }
    }


    return 0;
}

