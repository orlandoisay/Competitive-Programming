#include <bits/stdc++.h>

double a,b;

int main()
{
    do
    {
        scanf("%lf %lf",&a,&b);
        if(a==0 || b==0)
        {
            printf("AXIS\n");
        }else
        {
            if(a>0 && b>0)
                printf("Q1");
            else if(a<0 && b>0)
                printf("Q2");
            else if(a<0 && b<0)
                printf("Q3");
            else
                printf("Q4");
            printf("\n");
        }
    }while(a!=0 || b!=0);
    return 0;
}
