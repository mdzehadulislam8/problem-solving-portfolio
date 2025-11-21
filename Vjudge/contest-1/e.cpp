#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    long long a,b,d,r;
    double f;
    cin >> a >> b;
    d = a/b;
    r = a%b;

    if (b != 0) {
        f = (double)a / b;
    }
    cout << fixed << setprecision(5);
    cout << d << " " << r << " " << f;
}
