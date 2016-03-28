#include <bits/stdc++.h>

int d,k;
int num[5000];

void square()
{
    int a[5000],b[5000];

    memset(b,0,sizeof(b));

    for(int i=0;i<k;i++)
    {
        memset(a,0,sizeof(a));
        for(int m=0;m<k;m++)
        {
            a[m+i]+=num[i]*num[m];
            a[m+i+1]+=a[m+i]/10;
            a[m+i]%=10;
        }
        for(int j=0;j<4900;j++)
        {
            b[j]+=a[j];
            int l=j;
            b[j+1]+=b[j]/10;
            b[j]%=10;
        }
    }
    memcpy(num,b,sizeof(b));
}


int main()
{
    while(1)
    {
        scanf("%d %d",&d,&k);
        if(!d && !k)
            break;

        for(int i=0;i<k;i++)
            num[i]=d;

        square();
        int r=0;

        for(int i=0;i<5000;i++)
        {
            r+=num[i];
        }
        printf("%d\n",r);
    }

    return 0;
}
