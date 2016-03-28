#include <stdio.h>

int main()
{
    int t;
    
    scanf("%d",&t);
    
    double max=0;
    int ind=1;
    
    for(int k=0;k<t;k++)
    {
        double num;
        scanf("%d",&num);
        if(num>=max)
        {
            max=num;
            ind=k+1;
        }
    }
    
    printf("%d",ind);
    
    return 0;
}