#include <bits/stdc++.h>

int n,c;

int mcd(int a,int b)
{
    if(b==0)
        return a;

    return mcd(b,a%b);
}

int main()
{
    scanf("%d",&n);

    for(int i=1;i<n;i++)
        if(mcd(n,i)==1)
            c++;

    printf("%d\n",c);
    return 0;
}
