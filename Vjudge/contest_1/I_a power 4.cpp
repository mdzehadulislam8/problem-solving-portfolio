#include <iostream>
using namespace std;
int main (){

    int A,B,add,store;

    cin >> A >> B;

    store = A;

    for(int i = 0; i<B; i++){

        add = store*A;
        store = add;

    }

    cout << store;

}
