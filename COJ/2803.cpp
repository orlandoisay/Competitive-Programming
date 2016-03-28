#include <bits/stdc++.h>

int t,n;
char m[11][11];

int main()
{
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);

        for(int j=0;j<n;j++)
            scanf("%s",m[j]);

        bool r=true;

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(j-1>=0 && m[j][k]==m[j-1][k])
                    r=false;


                if(j+1<n && m[j][k]==m[j+1][k])
                    r=false;

                if(k-1>=0 && m[j][k]==m[j][k-1])
                    r=false;

                if(k+1<n && m[j][k]==m[j][k+1])
                    r=false;
            }
        }



        if(r)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
