#include <stdio.h>
#include <algorithm>
#include <string.h>

int T;
int N;
int Tiendas[20];
int Res;

int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(int j=0;j<N;j++)
        {
            scanf("%d",&Tiendas[j]);
        }

        int Res=0;
        std::sort(Tiendas,Tiendas+N); //Magia negra

        for(int j=N-2;j>=0;j--)
        {
            Res+=Tiendas[j+1];
            Res-=Tiendas[j];
        }

        Res*=2;

        printf("%d",Res);

        if(i<T-1)
            printf("\n");

        memset(Tiendas,0,sizeof(Tiendas));
    }
    return 0;
}
