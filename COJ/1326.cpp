#include <stdio.h>

long long int N;
long long int B;
long long int A;
long long int TMP;
char C[2];

int main()
{
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%lld",&B);
        scanf("%lldd",&A);

        for(int j=0;j<A;j++)
        {
            scanf("%s %d",C,&TMP);
            if(C[0]=='D')
            {
                B-=TMP;
            }
            else if(C[0]=='C')
            {
                B+=TMP;
            }
        }

        printf("%lld",B);
        if(i<N-1)
            printf("\n");
    }

    return 0;
}
