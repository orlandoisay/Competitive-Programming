#include <bits/stdc++.h>

int t;

int main()
{
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        double a,b;
        scanf("%lf %lg",&a,&b);

        printf("%.8lf\n",((a*b)/16)*3);
    }
    return 0;
}
