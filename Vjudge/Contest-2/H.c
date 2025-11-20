#include <stdio.h>
int main(){
    int R1,R2,D1,D2;
    scanf("%d %d",&R1,&R2);
    scanf("%d %d",&D1,&D2);

    int Dominater = (R1) + (D1);
    int Everule = (R2) + (D2);

    if(Dominater > Everule){
        printf("Dominater\n");
    }else{
    printf("Everule\n");
    }

    return 0;
}
