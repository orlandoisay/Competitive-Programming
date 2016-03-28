#include <stdio.h>

int N;
bool C[1000001];

void gen()
{
    for(int i=2;i<1000000;i++)
    {
        if(!C[i])
        {
            for(int j=i*2;j<1000000;j+=i)
            {
                C[j]=true;
            }
        }
    }
}

int main()
{
    gen();
    scanf("%d",&N);

    for(int i=4;i<N;i++)
    {
        if(C[i] && C[N-i])
        {
            printf("%d %d",i,N-i);
            return 0;
        }
    }

    return 0;
}