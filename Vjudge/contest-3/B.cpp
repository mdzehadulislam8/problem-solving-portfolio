#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<int> N(T);
    vector<int> M(T);
    vector<int> store(T);

    for (int i = 0; i < T; i++) {
        cin >> N[i] >> M[i];
        store[i] = M[i] - N[i];
    }

    for (int i = 0; i < T; i++) {
        if (M[i] < N[i]) {
            cout << "0" << endl;
        } else {
            cout << store[i] << endl;
        }
    }

    return 0;
}
