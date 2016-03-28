#include <bits/stdc++.h>

int t;
char w[101];
int a;

int main()
{
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%s",w);
        a=0;
        for(int j=0;j<strlen(w);j++)
        {
            if(w[j]>='a' && w[j]<='z')
                a--;
            if(w[j]>='A' && w[j]<='Z')
                a++;
        }


        if(a==0)
            printf("SI\n");
        else
            printf("NO\n");
    }

    return 0;
}
