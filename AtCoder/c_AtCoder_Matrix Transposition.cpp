#include <iostream>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;

    int metrix_store[h][w];
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            cin >> metrix_store[i][j];
        }
    }


    for(int i = 0; i<w; i++){
        for(int j = 0; j<h; j++){
            cout << metrix_store[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
