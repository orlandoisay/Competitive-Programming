#include <bits/stdc++.h>

char a[100000];
char b[100000];

int main()
{
    while(scanf("%s %s",a,b)!=EOF)
    {
        int la=strlen(a);
        int lb=strlen(b);
        int x=0;

        for(int i=0;i<lb;i++)
        {
            if(b[i]==a[x])
            {
                x++;
                if(x==la)
                {
                    break;
                }
            }
        }
        if(x==la)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
