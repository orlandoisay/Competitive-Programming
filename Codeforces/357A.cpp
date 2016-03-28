#include <stdio.h>

int main()
{
    int n,arreglo[100],x,y;
    int fin=0,index=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arreglo[i]);
    }
    scanf("%d%d",&x,&y);

    //Sacar total
    int total = 0;
    for(int i=0;i<n;i++)
    {
        total += arreglo[i];
    }

    if(total >= 2*x && total <= 2*y)
    {
        for(int i=1;i<n;i++)
        {
            int a=0, b=0;
            for(int j=0;j<i;j++)
            {
                a+=arreglo[j];
            }
            for(int j=i;j<n;j++)
            {
                b+=arreglo[j];
            }
            if(x<=a && a<=y && x<=b && b<=y)
            {
                index=i+1;
                fin++;
            }
        }
        printf("%d",index);
    }
    else
    {
        printf("0");
    }

    return 0;
}