#include <iostream>
using namespace std;

int main() {

    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;

    r1--;c1--;r2--;c2--;

    int sum = 0;

     for(int i=r1; i<=r2; i++){
        for(int j=c1; j<=c2; j++){
             sum += arr[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}

