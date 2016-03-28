#include <stdio.h>

int a,b,c;

int main()
{
    scanf("%d",&a);
    
    while(a!=0)
    {
        scanf("%d %d",&b,&c);
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        {
            printf("right");
        }
        else
        {
            printf("wrong");
        }
        printf("\n");
        scanf("%d",&a);
    }
    
    return 0;
}