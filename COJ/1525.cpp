#include <bits/stdc++.h>

long long int N,M,A,B,T;
long long int L[50];

void in()
{
    long long int it=1;
    for(int i=1;i<33;i++)
    {
        L[i]=it+L[i-1];
        it*=4;
    }
}

int main()
{
    in();
    scanf("%lld %lld",&N,&M);

    while(N>0)
    {
        if((N-1)%2==0)
        {
            A++;
            N-=1;
            N/=2;
        }
        else
            break;
    }
    while(M>0)
    {
        if((M-1)%2==0)
        {
            B++;
            M-=1;
            M/=2;
        }
        else
            break;
    }
    A=std::min(A,B);

    printf("%lld\n",L[A]);


    return 0;
}
