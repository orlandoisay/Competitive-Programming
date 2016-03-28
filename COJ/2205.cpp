#include <bits/stdc++.h>

int t,x,y;
int a[]={1,2,4,8,16,32,64,128,256,512};
int l[1024];
int z[1001];

void gen(int pos,int sum,int u)
{
    if(pos==10)
    {
        l[sum]=u;
        return;
    }

    gen(pos+1,sum+a[pos],u+1);
    gen(pos+1,sum,u);
}

void gen2()
{
    for(int i=1;i<=1000;i++)
        z[i]=z[i-1]+l[i];
}

int main()
{
    gen(0,0,0);
    gen2();

    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",z[y]-z[x-1]);
    }

    return 0;
}
