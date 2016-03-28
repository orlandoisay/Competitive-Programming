#include <bits/stdc++.h>

int T,N;
char In[1005];

int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%s",In);

        N=0;
        for(int j=0;j<strlen(In);j++)
        {
            N+=In[j]-'0';
        }

        while(N>=10)
        {
            sprintf(In,"%d",N);
            N=0;
            for(int j=0;j<strlen(In);j++)
            {
                N+=In[j]-'0';
            }
        }
        printf("%d\n",N);
    }
    return 0;
}
