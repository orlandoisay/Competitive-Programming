#include <stdio.h>
#include <string.h>

char s[1001];
int a,b;


int main()
{
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++)
    {
        switch(s[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                a++;
                break;
            default:
                b++;
                break;
        }
    }

    printf("%d %d\n",a,b);    

    return 0;
}
