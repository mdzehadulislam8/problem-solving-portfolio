#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count1 = 0, count2 = 0;

    for(int i = 0; i<n; i++){
        if(s[i] == 'A'){
            count1 ++;
        }else if(s[i] == 'T'){
            count2 ++;
        }
    }


    if(count2 > count1){
        cout <<  "T" << endl;
    }else if(count1 > count2){
        cout << "A" << endl;
    }else{

        // int count3 = 0, count4 = 0;

        // for(int i=0; i<n; i++){
        //     if(s[i] == 'A'){
        //         count3++;
        //         if(count3 == count1){
        //             cout << "A" << endl;
        //             break;
        //         }
        //     }else{
        //         count4++;
        //         if(count4 == count2){
        //             cout << "T" << endl;
        //             break;
        //         }
        //     }
        // }

        if(s[n-1] == 'T'){
            cout << "A" << endl;
        }else{
            cout << "T" << endl;
        }

    }

    return 0;
}
