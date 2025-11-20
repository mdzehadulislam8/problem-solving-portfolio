#include <bits/stdc++.h>
using namespace std;
 int main(){
     int n;

     vector<int> ai;

     cin >> n;

     for(int i = 0; i < n; i++){
            int x;
        cin >> x;

     ai.push_back(x);
     }

      sort(ai.begin(), ai.end());

      for (int x : ai)
        cout << x << " ";

      return 0;

 }
