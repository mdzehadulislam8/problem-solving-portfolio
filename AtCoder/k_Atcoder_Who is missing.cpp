#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int sum = n*4 - 1;

    int a[400005];    
    int count[100005];

    for(int i = 1; i<=n; i++){
        count[i] = 0;
    }

    for(int j = 1; j<=sum; j++){
        cin >> a[j];

        count[a[j]]++; //Frequency array
    }

    for (int i = 1; i <= n; i++) {
        if (count[i] == 3) {
            cout << i << endl;
            break;
        }
    }

    return 0;
    }