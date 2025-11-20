#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;

    double x;

    while(t--){
        cin >> x;

        double one_seling = x/5;

        int i = 1,count = 0;
        while((one_seling * i) < 100){
            count ++;
            i++;
        }
        count ++;
        cout << count << endl;

    }
return 0;
}