#include <stdio.h>

int n;

int main()
{
    scanf("%d",&n);

    for(int i=0;i<10;i++)
    {
        n*=13821;
        n%=32768;

        int m=(n%7)+1;
        printf("%d : %d\n",n,m);
    }
    return 0;
}
