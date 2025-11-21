#include <iostream>
using namespace std;
int main(){
    int n,p,q,r,s;
    cin >> n >> p >> q >> r >> s;

    int a[n+1];

    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    for(int i = 1; i<=p-1; i++){
        cout << a[i] << " ";
    }

    for(int i = r; i<=s; i++){
        cout << a[i] << " ";
    }

    for(int i = q+1; i<=r-1; i++){
        cout << a[i] << " ";
    }

    for(int i = p; i<=q; i++){
        cout << a[i] << " ";
    }
    for(int i = s+1; i<=n; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
    }