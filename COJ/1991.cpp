#include <bits/stdc++.h>

int N,Ni;
char str[41];
int a[8];

int main()
{
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d",&Ni);
        scanf("%s",str);

        memset(a,0,sizeof(a));
        for(int j=0;j<38;j++)
        {
            char x,y,z;
            x=str[j];
            y=str[j+1];
            z=str[j+2];
            if(x=='T')
            {
                if(y=='T')
                {
                    if(z=='T')
                    {
                        a[0]++;
                    }
                    else
                    {
                        a[1]++;
                    }
                }
                else
                {
                    if(z=='T')
                    {
                        a[2]++;
                    }
                    else
                    {
                        a[3]++;
                    }
                }
            }
            else
            {
                if(y=='T')
                {
                    if(z=='T')
                    {
                        a[4]++;
                    }
                    else
                    {
                        a[5]++;
                    }
                }
                else
                {
                    if(z=='T')
                    {
                        a[6]++;
                    }
                    else
                    {
                        a[7]++;
                    }
                }
            }
        }

        printf("%d ",Ni);
        for(int j=0;j<8;j++)
        {
            printf("%d",a[j]);
            if(j<7)
                printf(" ");
            else
                printf("\n");
        }
    }
}
