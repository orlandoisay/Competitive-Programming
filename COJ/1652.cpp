#include <stdio.h>

int N,C;

void H(int D,char I,char M,char F)
{
    if(D==1)
    {
        printf("Move ring from stick %c to stick %c.\n",I,F);
        C++;
        return;
    }

    H(D-1,I,F,M);
    H(1,I,M,F);
    H(D-1,M,I,F);
}

int main()
{
    scanf("%d",&N);
    H(N,'1','2','3');
    printf("You needs %d moves.\n",C);
    return 0;
}
