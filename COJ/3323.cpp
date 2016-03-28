#include <bits/stdc++.h>
using namespace std;

long long n,m;

int main() {
    while(1)
    {
        scanf("%lld%lld",&n,&m);
        if(n==0 && m==0)
            break;
        long long totalNums= m-n+1;
        long long raices= sqrt(m);
        long long raizMenor=sqrt(n-1);
        //printf("Nums: %lld Cuadrados: %lld CuadradosMenores: %lld\n",totalNums, raices, raizMenor);
        raices-=raizMenor;
        totalNums-=raices;
        printf("%lld\n",totalNums);
    }

    return 0;
}