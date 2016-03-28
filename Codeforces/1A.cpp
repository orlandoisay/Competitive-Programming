#include <stdio.h>

int main(){
    long long int N,M,A;
    scanf("%I64d %I64d %I64d",&N,&M,&A);
    
    long long int B,H;
    
    B=N/A;
    B+=N%A==0?0:1;
    H=M/A;
    H+=M%A==0?0:1;
    
    printf("%I64d",B*H);
    return 0;
}