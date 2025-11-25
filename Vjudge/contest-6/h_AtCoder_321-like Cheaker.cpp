#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

    string x;
    cin >> x;

    int count = 1;
    for(int i=0; i<x.length()-1; i++){
        if(x[i] <= x[i+1]){
            count = 0;
            break;
        }
    }
    if(count == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}