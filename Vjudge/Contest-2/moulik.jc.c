#include <stdio.h>
int main(){
    int num,count = 0;

    scanf("%d",&num);


    for(int i = 1; i<=num; i++){
        if(num%i){
            count ++;
        }

        if(count == 2){
            printf("prime number %d\n",i);
        }else{
        printf("not prime %d\n",i);}
    }



}
