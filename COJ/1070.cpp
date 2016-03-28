#include <stdio.h>

int A;

int main()
{
    while(scanf("%d",&A)!=EOF)
    {
        printf("%d %d\n",(A*(A+1)*(2*A+1))/6,((A*(A+1))/2)*((A*(A+1))/2));
    }
    return 0;
}
