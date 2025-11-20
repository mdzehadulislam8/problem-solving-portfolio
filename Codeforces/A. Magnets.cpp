#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int>k;
    vector<int>m;
    vector<int>z;

    int count1 = 0;
    int count2 = 0;
    int totalcount = 0;


    for(int i=0; i<n; i++){
        int s;
        cin >> s;
        k.push_back(s);
    }

    for(int i = 0; i<n; i++){

        if(k[i] == 10 && count1 == 0){
          m[0] == k[i];
          count1 ++;
          totalcount ++;
          break;
        }else if(k[i] == 01 && count2 == 0){
          z[0] == k[i];
          count2 ++;
          totalcount ++;
          break;
        }

        if(m[0] == 10){
               count1 --;

    }

        if(z[0] == 01){
               count2 --;

    }
}

    cout << totalcount << endl;
}

