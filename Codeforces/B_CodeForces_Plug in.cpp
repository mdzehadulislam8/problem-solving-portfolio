#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;
    cin>>s;

    stack <char> st;

    for(auto c:s){
        if(st.size() == 0 || st.top() != c){
            st.push(c);
        }
        else{
            st.pop();
        }
    }
    string ans;
    while(st.size()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<"\n";
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}