#include <bits/stdc++.h>

int A,B,X;

int main(){
    scanf("%d %d",&A,&B);

    if(A-B==0){
        printf("infinity");
        return 0;
    }

    if(B>A){
        printf("0");
        return 0;
    }

    for(int i=1;i*i<=A-B;i++){
        if((A-B)%i==0){
            if(i>B){
                X++;
            }
            if((A-B)/i>B && i!=(A-B)/i){
                X++;
            }
        }
    }

    printf("%d",X);
    return 0;
}