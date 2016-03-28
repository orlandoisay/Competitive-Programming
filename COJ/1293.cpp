#include <stdio.h>

int num[310];

void imprimeDesde(int a)
{
    for(int i=a;i>=0;i--)
    {
        printf("%d",num[i]);
    }
    return;
}

int main()
{
    num[0]=1;

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int llevamos=0;
        for(int j=0;j<310;j++)
        {
            num[j]*=2;
            num[j]+=llevamos;
            llevamos=0;
            while(num[j]>=10)
            {
                num[j]-=10;
                llevamos++;
            }
        }
    }




    for(int i=309;i>=0;i--)
    {
        if(num[i]!=0)
        {
            imprimeDesde(i);
            break;
        }
    }




    return 0;
}
