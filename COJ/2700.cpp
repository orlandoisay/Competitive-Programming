#include <stdio.h>
#include <string.h>

char a[30],b[30];

bool ua[26];
bool ub[26];

int main()
{
    scanf("%s %s",a,b);

    int la=strlen(a);

    for(int i=0;i<la;i++)
    {
        int x = a[i] -'A';
        ua[x]=true;
    }


    int lb=strlen(b);
    for(int i=0;i<lb;i++)
    {
        int x = b[i] - 'A';
        ub[x]=true;
    }

    printf("First:");
    for(int i=0;i<26;i++)
    {
        if(ua[i] && !ub[i])
        {
            printf("%c",i+'A');
        }
    }
    printf("\n");
    printf("Second:");
    for(int i=0;i<26;i++)
    {
        if(!ua[i] && ub[i])
        {
            printf("%c",i+'A');
        }
    }
    printf("\n");
    printf("First&Second:");
    for(int i=0;i<26;i++)
    {
        if(ua[i] && ub[i])
        {
            printf("%c",i+'A');
        }
    }
    printf("\n");
    return 0;
}
