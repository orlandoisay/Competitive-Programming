#include <stdio.h>

int main()
{
    int personas[100000]; int n;
    int c25=0;
    int c50=0;
    int final = 1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&personas[i]);
    }
    
    for(int i=0;i<n;i++)
    {       
        if(personas[i]==25)
        {
            c25++;
        }
        else if(personas[i]==50)
        {
            if(c25 > 0)
            {
                c25--;
                c50++;
            }
            else
            {
                final=0;                
            }   
        }
        else if(personas[i]==100)
        {
            if(c50 > 0 && c25 > 0)
            {
                c50--;
                c25--;              
            }
            else if(c25>=3)
            {
                c25-=3;
            }
            else
            {
                final=0;
            }
        
        }       
    }
    if(final==1)
    {
        printf("YES");      
    }
    else
    {
        printf("NO");       
    }
    
    return 0;
}