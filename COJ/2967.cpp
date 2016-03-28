#include <bits/stdc++.h>

int N,A;
bool C[400];
int P[80];
int L[800];

void gen()
{
    int ind=0;
    for(int i=2;i<400;i++)
    {
        if(!C[i])
        {
            P[ind++]=i;
            for(int j=i*i;j<400;j+=i)
            {
                C[j]=true;
            }
        }
    }

    for(int i=0;i<ind;i++)
        for(int j=i;j<ind;j++)
        {
            L[P[i]+P[j]]++;
        }

}


int main()
{
    gen();
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A);
        printf("%d\n",L[A]);
    }
    return 0;
}
