#include <iostream>
using namespace std;

int main() {
    int h,w,x,y;
    cin >> h >> w >> x >> y;

    char arr[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> arr[i][j];
        }
    }

 
    x = x - 1;
    y = y - 1;

    int count = 1; 

    // up
    for(int i = x-1; i >= 0; i--){
        if(arr[i][y] == '.') count++;
        else break;
    }

    // down
    for(int i = x+1; i < h; i++){
        if(arr[i][y] == '.') count++;
        else break;
    }

    // left
    for(int j = y-1; j >= 0; j--){
        if(arr[x][j] == '.') count++;
        else break;
    }

    // right
    for(int j = y+1; j < w; j++){
        if(arr[x][j] == '.') count++;
        else break;
    }

    cout << count << endl;

    return 0;
}
