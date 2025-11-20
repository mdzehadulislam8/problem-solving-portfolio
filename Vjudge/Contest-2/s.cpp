#include <iostream>
using namespace std;
int main (){
    char x1, x2, extra, y1, y2;
    bool xSide = true, ySide = true;

    cin >> x1 >> x2 >> extra >> y1 >> y2;

    if((int) (x1-x2)==1 || (int)(x1 - x2) == -1 || (int)(x1 - x2) == 4 || (int)(x1 - x2 ) == -4){
        xSide = true;
    }
        if((int) ( y1 - y2 ) == 1 || (int)(y1 - y2) == -1 || (int)(y1 - y2) == 4 || (int)(y1 - y2 ) == -4){
        xSide = true;
    }

    if((xSide == true && ySide == true) || (xSide == false && ySide == false)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}

