#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

    int N;
    cin >> N;

    string S;

    cin >> S;

    bool found = false;


    for(int i = 0; i<N-1; i++){

    if((S[i] == 'a' && S[i+1] == 'b') || (S[i] == 'b' && S[i+1] == 'a' )){
        found = true;
    }
    }
    if(found){
        cout << "Yes" << endl;
    }else{
    cout << "No" << endl;}

    return 0;
}



