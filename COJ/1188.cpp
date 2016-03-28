#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];
    int c=0;
    
    scanf("%s %s",a,b);
    
    for(int i=0;i<strlen(a);i++)
    {
        for(int j=0;j<strlen(b);j++)
        {
            c+=(a[i]-'0')*(b[j]-'0');
        }
    }
    
    printf("%d",c);
    
    return 0;
}