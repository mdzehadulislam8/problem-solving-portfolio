#include <bits/stdc++.h>
using namespace std;
int main (){

   int t;
   cin >> t;

   int a,b,c,d,e,f;

   while(t--){
    cin >> a >> b >> c >> d >> e >> f;

    int max = a;
    int min = b;
    int sum = a + b + c;

    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }

    if(a<min){
        min = a;
    }
    if(c<min){
        min = c;
    }


    int middle_value = sum - max - min;

    int alice = max*100 + middle_value*10 + min;

    int max2 = d;
    int min2 = e;
    int sum2 = d+e+f;

    if(e > max2){
        max2 = e;
    }
    if(f > max2){
        max2 = f;
    }

    if(d<min2){
        min2 = d;
    }
    if(f<min2){
        min2 = f;
    }


    int middle_value2 = sum2 - max2 - min2;

    int bob = max2*100 + middle_value2*10 + min2;


    if(alice > bob){
        cout << "Alice" << endl;
    }else if(bob > alice){
        cout << "Bob" << endl;
    }else{
        cout << "Tie" << endl;
    }


   }
return 0;
}