#include <bits/stdc++.h>

char w;

int main()
{
    while(scanf("%c",&w)!=EOF)
    {
        if(w=='#')
            break;

        switch(w)
        {
            case ' ':
                printf("%%20");
                break;
            case '!':
                printf("%%21");
                break;
            case '$':
                printf("%%24");
                break;
            case '%':
                printf("%%25");
                break;
            case '(':
                printf("%%28");
                break;
            case ')':
                printf("%%29");
                break;
            case '*':
                printf("%%2a");
                break;
            default:
                printf("%c",w);
                break;
        }
    }
    return 0;
}
