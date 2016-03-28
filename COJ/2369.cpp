#include <stdio.h>
#include <algorithm>

long long int T,A,B,C;
long long int MN,MX;
long long int Az[6];

int main()
{
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%lld %lld %lld",&A,&B,&C);
        Az[0]=A+B*C;
        Az[1]=(A+B)*C;
        Az[2]=C+A*B;
        Az[3]=(A+C)*B;
        Az[4]=B+C*A;
        Az[5]=(B+C)*A;

        MN=Az[0];
        MX=Az[0];

        for(int i=0;i<6;i++)
        {
            MX=std::max(MX,Az[i]);
            MN=std::min(MN,Az[i]);
        }

        printf("%lld %lld\n",MN,MX);

    }
    return 0;
}
