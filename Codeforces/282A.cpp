#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    char nx[150][5];
    int x=0;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%s",nx[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(nx[i][1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    
    printf("%d",x);
    return 0;
}