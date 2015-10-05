#include <bits/stdc++.h>

double n,m;

int main()
{
    while(1)
    {
        scanf("%lf",&n);

        if(n==0)
            break;

        m=0;
        double i=1;

        while(m<n)
        {
            m+=(1.0/(i+1));
            i++;
        }

        printf("%.0lf card(s)\n",i-1);
    }
    return 0;
}
