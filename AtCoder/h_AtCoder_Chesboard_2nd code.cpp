#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    while(n--){

    char s[3][4];

    for(int i=0; i<3; i++){
        cin >> s[i];
    }

    for(int row=0; row<3; row++){
        int a=0,b=0,c=0;
        for(int col=0; col<3; col++){
            if(s[row][col]=='A') {a=1;}
            else if(s[row][col]=='B') {b=1;}
            else if(s[row][col]=='C') {c=1;}
        }
        if(a==0){
            cout << "A" << endl;
            break;
        }
        else if(b==0){
            cout << "B" << endl;
            break;
        }else if(c==0){
            cout << "C" << endl;
            break;
        }
    }

}
    return 0;
}

