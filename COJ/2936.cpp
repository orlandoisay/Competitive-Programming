#include <bits/stdc++.h>

long long int A,B,C,D;

int main()
{
    while(scanf("%lld %lld",&A,&B)!=EOF)
    {
        C=(A*B*(A+B-2))/2;
        D=(A*B*(A-1)*(B-1))/4;
        printf("Triangles: %lld\nQuadrilaterals: %lld\n\n",C,D);
    }

    return 0;
}
