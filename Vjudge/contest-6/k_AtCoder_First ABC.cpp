#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count=0,count1=0,count2=0,count3=0,total_count;

    for(int i=0; i<n; i++){
        count++;
        if(s[i] == 'A'){
            count1 = 1;
        }
        if(s[i] == 'B'){
            count2 = 1;
        }
        if(s[i] == 'C'){
            count3 = 1;
        }

        total_count = count1 + count2 + count3;

        if(total_count == 3){
            break;
        }
    }

    cout << count << endl;
    return 0;
}