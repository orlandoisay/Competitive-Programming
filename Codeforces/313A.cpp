#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    b = a;
    if(a < 0)
    {   
        b*=-1;      
        while(b%10!=0)
        {
            b--;
            c++;
        }
        b/=10;
        
        int d=b;
        
        while(d%10!=0)
        {
            d--;
        }
        
        d+=c;
        if(b<d)
        {
            a=b*-1;         
        }
        
        else
        {
            a=d*-1;
        }       
    }
    printf("%d",a);
    
    return 0;
}