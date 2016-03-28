#include <bits/stdc++.h>

int t;
char n[75];

int main()
{
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%s",n);
        char f=n[strlen(n)-1];

        if((f-'0')%2==0)
        {
            printf("even\n");
        }
        else
            printf("odd\n");
    }

    return 0;
}
