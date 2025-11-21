#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int h[n];
    int go_fr = 0;

    for(int i = 0; i<n; i++){
        cin >> h[i];
    }

     for(int i = 0; i<n; i++){
        if(h[i] > go_fr){
            go_fr = h[i];
        }else
        {
            break;
        }
    }

    cout << go_fr << endl;
    return 0;
    }