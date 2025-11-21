#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int d[n];

    for(int i = 1; i<=n; i++){
        cin >> d[i];
    }

    int ans = 0;

    for(int i = 1; i<=n; i++){
        for(int k=1; k<=d[i]; k++){
            int flag = 1;
            int lastdigit = i%10;
            int i2 = i;
            while(i2!=0){
                int lastnow = i2%10;
                if(lastnow != lastdigit){
                    flag = 0;
                    break;
                }
                i2/=10;
            }
            int k2 = k;
            while(k2!=0){
                int lastnow=k2%10;
                if(lastnow!=lastdigit){
                    flag = 0;
                }
                k2/=10;
            }
        if(flag == 1){
            ans++;
        }
    }
    }
    cout << ans << endl;
    return 0;
    }