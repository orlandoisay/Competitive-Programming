#include <bits/stdc++.h>

int main()
{
    double n=0,m;

    for(int i=0;i<12;i++)
    {
        scanf("%lf",&m);
        n+=m;
    }

    printf("$%.2lf",n/12);

    return 0;
}
