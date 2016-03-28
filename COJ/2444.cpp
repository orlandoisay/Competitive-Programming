#include <bits/stdc++.h>

int t,n;
int a[]={1,2,4,8,16,32,64,128,256,512};
bool l[1024];

void gen(int pos,int sum,int u)
{
    if(pos==10)
    {
        if(u%2==0)
            l[sum]=true;
        return;
    }

    gen(pos+1,sum+a[pos],u+1);
    gen(pos+1,sum,u);
}

int main()
{
    gen(0,0,0);

    while(scanf("%d",&n)!=EOF)
    {
        if(l[n])
            t++;
    }

    printf("%d\n",t);

    return 0;
}
