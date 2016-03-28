#include <stdio.h>
#include <algorithm>

int T,N,MX,P[105][105];

int main()
{
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        MX=0;
        for(int j=0;j<N;j++)
        {
            for(int k=1;k<=j+1;k++)
            {
                scanf("%d",&P[j][k]);
            }
            P[j][j+2]=0;
        }

        for(int i=1;i<N;i++)
        {
            for(int j=1;j<=N;j++)
            {
                P[i][j]+=std::max(P[i-1][j],P[i-1][j-1]);
            }
        }

        for(int i=1;i<=N;i++)
            MX=std::max(MX,P[N-1][i]);

        printf("%d\n",MX);
    }
    return 0;
}
