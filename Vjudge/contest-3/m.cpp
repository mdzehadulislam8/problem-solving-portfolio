#include <iostream>
using namespace std;
int main (){

    int T;

    cin >> T;

    char A[T], B[T], C[T], D[T], E[T], F[T];
    int count1 = 0, count2 = 0;

    for(int i = 0; i<T; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i] >> E[i] >> F[i];

        for(int j = 0; j<6; j++){
            if(A[j] == 'w'){
                count1++;
            }else if(B[j] == 'w'){
                count1++;
            }else if(C[j] == 'w'){
                count1++;
            }else if(D[j] == 'w'){
                count1++;
            }else if(E[j] == 'w'){
                count1++;
            }else if(F[j] == 'w'){
                count1++;
            }else if(A[j] == '6'){
                count2++;
            }else if(B[j] == '6'){
                count2++;
            }else if(C[j] == '6'){
                count2++;
            }else if(D[j] == '6'){
                count2++;
            }else if(E[j] == '6'){
                count2++;
            }else if(F[j] == '6'){
                count2++;
            }

            if(count1 >= 3){

                cout << "YES" << endl;

            }else if(count2 >= 3){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }

    }
return 0;
}
