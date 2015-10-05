#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int T;
int N,M;
int V[5];

int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&N,&M);

        for(int j=0;j<M;j++)
        {
            for(int k=0;k<N;k++)
            {
                int TMP;
                scanf("%d",&TMP);

                V[k]+=TMP;
            }
        }

        int Mx=V[0];
        int iMx=0;

        for(int j=0;j<N;j++)
        {
            if(V[j]>Mx)
            {
                Mx=V[j];
                iMx=j;
            }
        }

        memset(V,0,sizeof(V));
        printf("%d",iMx+1);

        if(i<T-1)
            printf("\n");
    }

    return 0;
}
