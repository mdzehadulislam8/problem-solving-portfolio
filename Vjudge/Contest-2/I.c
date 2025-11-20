#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int sum = B+C;
    if(A<B){
        printf("No");
    }else if (A<C){
    printf("No");
    }else{
    printf("Yes");
    }

    return 0;
}

