#include <stdio.h>

int p,q;
int a[6000],b[6000];
int la,lb;

int main()
{
    scanf("%d %d",&p,&q);

    for(int i=1;i<=p;i++)
        if(p%i==0)
            a[la++]=i;

    for(int i=1;i<=q;i++)
        if(q%i==0)
            b[lb++]=i;

    for(int i=0;i<la;i++)
        for(int j=0;j<lb;j++)
            printf("%d %d\n",a[i],b[j]);
    return 0;
}
