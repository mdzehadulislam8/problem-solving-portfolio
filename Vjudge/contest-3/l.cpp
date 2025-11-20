#include <iostream>
using namespace std;
int main (){

    int t;
    cin >> t;

    int rating[t];

    for(int i = 0; i<t; i++){
        cin >> rating[i];

        if(1900 <= rating[i]){
            cout << "Division 1" << endl;
        }else if(1600 <= rating[i] && rating[i] <=1899){
            cout << "Division 2" << endl;
        }else if(1400 <= rating[i] && rating[i] <= 1599){
            cout << "Division 3" << endl;
        }else{ //if(rating[i] <= 1399){
            cout << "Division 4" << endl;
        }
    }

}