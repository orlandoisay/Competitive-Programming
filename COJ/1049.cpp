#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d",(n*(n+1))/2);
    }
    else{
        int x=1;
        for(int i=0;i>=n;i--)
        {
            x+=i;
        }
        printf("%d",x);
    }
    return 0;
}
