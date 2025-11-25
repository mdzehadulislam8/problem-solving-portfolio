#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int>b){ 
    if(a.first!=b.first)return a.first<b.first; 
    return a.second>b.second; 
}

void solve(){
    int t;
    scanf("%d",&t);

    while (t--) {
    int n;
    scanf("%d",&n);

    vector <pair<int, int>> s;
      s.reserve(n);

     for (int i = 0; i < n; i++) {
            int k, m;
            scanf("%d%d",&k,&m);
            s.push_back({k, m});
        }
    sort(s.begin(), s.end(), cmp);

    for(auto p:s){
        printf("%d %d\n",p.first,p.second);
    }
    }
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}