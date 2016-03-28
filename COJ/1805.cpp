#include <stdio.h>

int main()
{
    long long int a,b,c;
    
    scanf("%lld %lld",&a,&b);
    
    c=(a+b)+(a-b)+(b+a)+(b-a);
    
    printf("%lld",c);
    
    return 0;
}