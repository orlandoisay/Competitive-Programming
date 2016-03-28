#include <stdio.h>

int N,S;
int M[20][20];

int main()
{
    scanf("%d %d",&N,&S);

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            M[j][i]=S;
            S++;
            if(S==10)
                S=1;
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(M[i][j]>0)
                printf("%d",M[i][j]);
            else
                printf(" ");
            if(j<N-1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
