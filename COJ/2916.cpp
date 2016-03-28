#include <stdio.h>

int N;
long long int a,b;

long long int mcd(long long int a, long long int b)
{
    if(b>a)
        return mcd(b,a);

    if(!b)
        return a;

    return mcd(b,a%b);
}

int main()
{

    while(scanf("%lld %lld",&a,&b)!=EOF) {
        if(mcd(a,b)>1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
