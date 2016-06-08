#include <bits/stdc++.h>
using namespace std;

int T, A,B;
double FIN = 0.0;

int main () {

    scanf("%d",&T);

    for(int i=0;i<T;i++) {
        scanf("%d %d",&A,&B);

        FIN += double(A*B)/100.0;

        for(int k=0;k<A;k++)
            printf("*");
        printf("\n");
    }

    if(FIN >= 6.0)
        printf("%.0f\n:)\n",FIN);
    else
        printf("0\n:(\n");

    return 0;
}
