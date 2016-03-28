#include <stdio.h>

int N,R,A=1;

int main(){
    scanf("%d",&N);

    while(N) {
        if(N%10==4)
            R+=A;
        else
            R+=(2*A);
        A*=2, N/=10;
    }

    printf("%d",R);
    return 0;
}