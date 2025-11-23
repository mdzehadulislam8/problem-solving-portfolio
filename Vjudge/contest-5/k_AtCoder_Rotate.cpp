#include <iostream>
using namespace std;

int main() {
   
int n;
cin >> n;

char A[n][n], NA[n][n];

for(int i = 0; i<n; i++){
    for(int j=0; j<n; j++){
        cin >> A[i][j];
    }
}

for(int j=0; j<=n-2; j++){
    NA[0][j+1]=A[0][j]; // First row A[0] to every value rotate
}

for(int i=0; i<=n-2; i++){
    NA[i+1][n-1]=A[i][n-1]; // last column every value rotate 
}

for(int j=1; j<=n-1; j++){
    NA[n-1][j-1]=A[n-1][j];// last row every value rotate
}

for(int i=1; i<=n-1; i++){
    NA[i-1][0]=A[i][0]; // First column every value rotate
}

for(int i=1; i<n-1; i++){
    for(int j=1; j<n-1; j++){
        NA[i][j]=A[i][j]; // midle value same to same store na array under
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout << NA[i][j];
    }
    cout << endl;
}
    return 0;
}