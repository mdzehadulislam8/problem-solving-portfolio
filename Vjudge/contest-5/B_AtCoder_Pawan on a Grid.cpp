#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    char grid[h][w]; 

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j]; 
        }
    }

    int count = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if(grid[i][j] == '#'){
                count ++;
            }
        }
    }
      cout << count << endl;
    return 0;
}
