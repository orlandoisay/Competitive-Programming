#include <stdio.h>

char w[15];
double a,b;

int main()
{
    scanf("%s",w);

    switch(w[0])
    {
        case 'c':
            scanf("%lf",&a);
            printf("%.2lf\n",3.14*a*a);
            break;
        default:
            scanf("%lf %lf",&a,&b);
            printf("%.2lf\n",(a*b)/2);
            break;
    }
    return 0;
}
