#include <stdio.h>

int main(){
    long long int N,M,A;
    scanf("%lld %lld %lld",&N,&M,&A);

    long long int B,H;

    B=N/A;
    B+=N%A==0?0:1;
    H=M/A;
    H+=M%A==0?0:1;

    printf("%lld",B*H);
    return 0;
}
