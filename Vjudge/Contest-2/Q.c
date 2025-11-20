#include<stdio.h>
int main(){
    int a,b;

    scanf("%d %d",&a,&b);

    int work = (a + b + (a*b));

    if(work == 111){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}


