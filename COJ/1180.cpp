#include <bits/stdc++.h>

int a[]={1,1,2,2,2,8};

int n,t;

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&t);
            printf("%d",a[j]-t);
            if(j<5)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
