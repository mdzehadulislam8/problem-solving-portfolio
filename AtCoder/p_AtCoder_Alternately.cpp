#include <iostream>
using namespace std;
int main(){

    int n; 
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'M' && s[i+1] == 'M' || s[i] == 'F' && s[i+1] == 'F'){
            count = 1;
        }
    }

    if(count == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
