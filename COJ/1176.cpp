#include <stdio.h>

long long int N,I,A[20];
int main()
{
    while(1)
    {
        scanf("%lld",&N);
        if(N==-1)
            break;
        I=0;
        if(N==0)
        {
            printf("0");
        }
        while(N>0)
        {
            A[I++]=N%3;
            N/=3;
        }
        for(int i=I-1;i>=0;i--)
            printf("%lld",A[i]);

        printf("\n");
    }
    return 0;
}
