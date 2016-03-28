#include <bits/stdc++.h>

double n;

double f(double num)
{
    double c=sqrt(2*((num/2)*(num/2)));
    double lado=2*c-num;
    double perimetro=8*lado;
    double area=(perimetro*(num/2))/2;
    return area;
}

int main()
{
    while(1)
    {
        scanf("%lf",&n);

        if(n==0)
            break;

        double r=f(n);

        printf("%.3lf\n",r);
    }

    return 0;
}
