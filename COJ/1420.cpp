#include <bits/stdc++.h>
using namespace std;
unsigned long long int S,A,X,Y;

int main()
{
    while(scanf("%llu %llu",&S,&A)!=EOF) {
        X=(S-A)/2;
        Y=X+A;

        if((S-X)!=Y || (X^Y)!=A)
            printf("-1\n");
        else
            printf("%llu %llu\n",X,Y);
    }


    return 0;
}
