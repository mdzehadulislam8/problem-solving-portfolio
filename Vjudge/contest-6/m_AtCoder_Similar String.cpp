#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    string s1,s2;
    cin >> s1 >> s2;

    int count = 0;
    for(int i=0; i<n; i++){
        if(s1[i] != s2[i]){
        if(!(s1[i] == '1' && s2[i] == 'l') && !(s1[i] == 'l' && s2[i] == '1') && !(s1[i] == '0' && s2[i] == 'o')  && !(s1[i] == 'o' && s2[i] == '0' )){
            count = 1;
            break;
        }
    }
        
    }

    if(count == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
