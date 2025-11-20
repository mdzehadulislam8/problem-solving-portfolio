#include <stdio.h>
int main() {
    int W,H;

    scanf("%d %d",&W,&H);

    int weighs = 60;
    int height = 130;

    if(W>=weighs && height >= H){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

