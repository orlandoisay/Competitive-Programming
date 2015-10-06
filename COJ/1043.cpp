#include <bits/stdc++.h>

int t,n;
int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384};
bool u[15];

int main()
{
    scanf("%d",&t);

    for(int k=0;k<t;k++)
    {
        scanf("%d",&n);
        memset(u,0,sizeof(u));
        int c=0;
        for(int i=14;i>=0;i--)
        {
            if(a[i]<=n)
            {
                c++;
                u[i]=true;
                n-=a[i];
            }
        }
        for(int i=0;i<15;i++)
        {
            if(u[i])
            {
                printf("%d",i);
                c--;
                if(c>0)
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
