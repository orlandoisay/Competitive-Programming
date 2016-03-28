#include <bits/stdc++.h>

int T,N,C,A;

int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        C=0;

        for(int j=1;j<=N;j++)
        {
            scanf("%d",&A);
            if(A!=j)
                C++;
        }

        printf("%d\n",C);
    }


}
