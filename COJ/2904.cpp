#include <bits/stdc++.h>

int n;
char buffer[100];
int a[100], b[100];

void sumar()
{
    for(int i=0;i<90;i++)
    {
        b[i]+=a[i];
        b[i+1]+=b[i]/10;
        b[i]%=10;
    }
}

void pr()
{
    for(int i=100;i>=0;i--)
    {
        if(b[i]!=0)
        {
            for(int j=i;j>=0;j--)
                printf("%d",b[j]);
            break;
        }
    }
    printf("\n");
}

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        memset(a,0,sizeof(a));
        scanf("%s",buffer);

        for(int j=strlen(buffer)-1,k=0;j>=0;j--)
            a[k++]=buffer[j]-'0';

        sumar();
    }
    pr();

    return 0;
}
