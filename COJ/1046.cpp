#include <stdio.h>

int T,a,b;
long long int C[1001],SC[1001];

void initC()
{
    C[1]=6;

    for(long long int i=2;i<=1000;i++)
    {
        long long int tm=(C[i-1]/(i-1))*(i+2);
        C[i]=tm;
    }

    for(long long int i=1;i<=1000;i++)
        SC[i]=SC[i-1]+C[i];
}


int main()
{
    initC();
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&a,&b);
        printf("%lld\n",(SC[b]-SC[a-1])%100);
    }
    return 0;
}
