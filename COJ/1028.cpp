#include <bits/stdc++.h>

char s[35],t[35];

int main()
{
    while(scanf("%s %s",s,t)!=EOF)
    {
        bool r=false;
        for(int i=0,j=0;i<strlen(t);i++)
        {
            if(s[j]==t[i])
                j++;

            if(j==strlen(s))
            {
                r=true;
                break;
            }
        }

        if(r)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
