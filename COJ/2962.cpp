#include <bits/stdc++.h>

int N;
char G[16][35000];

int main()
{
    for(int i=1;i<=15;i++)
    {
        int lant=strlen(G[i-1]);
        for(int j=0;j<lant;j++)
        {
            G[i][j]=G[i-1][j];
        }
        G[i][lant]='L';
        for(int j=0;j<lant;j++)
        {
            if(G[i-1][lant-1-j]=='L')
                G[i][lant+1+j]='R';
            else
                G[i][lant+1+j]='L';
        }
    }
    while(1)
    {
        scanf("%d",&N);
        if(N==-1)
            break;
        printf("%s\n",G[N]);
    }
    return 0;
}
