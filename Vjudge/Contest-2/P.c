#include<stdio.h>
int main(){
    int A,B,X,Y;

    scanf("%d %d %d %d",&A,&B,&X,&Y);

    int messi = (A * 2) + B;
    int ronaldo = (X * 2) + Y;

    if(messi > ronaldo){
        printf("Messi\n");
    }else if(ronaldo > messi){
        printf("Ronaldo\n");
    }else{
        printf("Equal\n");
    }

    return 0;
}

