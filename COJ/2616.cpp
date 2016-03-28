#include <stdio.h>
#include <algorithm>

int T,N;
int M[5][100001];
int C[5]={0,1,3,5,6};

void P()
{

    for(int i=1;i<=100000;i++)
    {
        M[1][i]=i;
        for(int j=2;j<=4;j++)
        {
            if(C[j]>i) //La moneda es mas grande
            {
                M[j][i]=M[j-1][i];
            }
            else
            {
                M[j][i]=std::min(M[j-1][i],1+M[j][i-C[j]]);
            }
        }
    }
}

int main()
{
    P();
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        printf("Case %d: %d\n",i+1,M[4][N]);
    }
    return 0;
}
