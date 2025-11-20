#include <stdio.h>
int main(){
    int X;

    scanf("%d",&X);

    if(X<3){
        printf("GOLD\n");
    }else if(X>=3 && 6>X){
        printf("SILVER\n");
    }else if(6<=X){
        printf("BRONZE\n");
    }
    return 0;
}
