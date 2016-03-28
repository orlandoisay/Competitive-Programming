#include <bits/stdc++.h>

int T,N;

int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);

        if(N%2==0)
        {
            while(N%2==0)
                N/=2;
            printf("%d",N);
        }
        else
        {
            N*=2;
            printf("%d",N);
        }
        printf("\n");
    }
    return 0;
}
