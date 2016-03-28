#include <stdio.h>

int A,B;

int main (){
    while(1){
        scanf("%d %d",&A,&B);
        if(!A && !B){
            break;
        }
        printf("%d %d / %d\n",A/B,A%B,B);
    }
    return 0;
}
