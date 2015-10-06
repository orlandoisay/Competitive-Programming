#include <stdio.h>

long long int N,T;

int main()
{
    scanf("%lld",&N);
    T=N/3;
    T*=2;
    if(N%3==2)
    {
        T++;
    }
    printf("%lld\n",T);
    return 0;
}
