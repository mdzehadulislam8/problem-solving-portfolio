#include <bits/stdc++.h>
using namespace std;
int main (){

   int t;
   cin >> t;

   int a1,a2,a3,b1,b2,b3;
   
   while(t--){
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;



    string s1 = to_string(a1) + to_string(a2) + to_string(a3); 
    int num1 = stoi(s1);
    string s2 = to_string(a3) + to_string(a2) + to_string(a1); 
    int num2 = stoi(s2);
    string s3 = to_string(a2) + to_string(a1) + to_string(a3); 
    int num3 = stoi(s3);

    string s4 = to_string(a3) + to_string(a1) + to_string(a2); 
    int num4 = stoi(s4);
    string s5 = to_string(a2) + to_string(a3) + to_string(a1); 
    int num5 = stoi(s5);
    string s6 = to_string(a1) + to_string(a3) + to_string(a2); 
    int num6 = stoi(s6);


    string g1 = to_string(b1) + to_string(b2) + to_string(b3); 
    int gg1 = stoi(g1);
    string g2 = to_string(b3) + to_string(b2) + to_string(b1); 
    int gg2 = stoi(g2);
    string g3 = to_string(b2) + to_string(b1) + to_string(b3); 
    int gg3= stoi(g3);

    string g4 = to_string(b3) + to_string(b1) + to_string(b2); 
    int gg4 = stoi(g4);
    string g5 = to_string(b2) + to_string(b3) + to_string(b1); 
    int gg5 = stoi(g5);
    string g6 = to_string(b1) + to_string(b3) + to_string(b2); 
    int gg6 = stoi(g6);

    int max1 = max({num1,num2,num3,num4,num5,num6});
    int max2 = max({gg1,gg2,gg3,gg4,gg5,gg6});





    if(max1 > max2){
        cout << "Alice" << endl;
    }else if (max2 > max1)
    {
        cout << "Bob" << endl;
    }else{
        cout << "Tie" << endl;
    }
    }
    
return 0;
}