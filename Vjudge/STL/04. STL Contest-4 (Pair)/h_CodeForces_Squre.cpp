#include <bits/stdc++.h>
using namespace std;

bool pseudoSquareCheck(int a1, int b1, int a2, int b2) {
    int sum = a1 + b1 + a2 + b2;
    
    int root = (int)sqrt(sum);
    return root * root == sum;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        if (pseudoSquareCheck(a1, b1, a2, b2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
