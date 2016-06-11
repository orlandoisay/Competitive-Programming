#include <bits/stdc++.h>
#define pi 3.14159265359
using namespace std;

int T,V[1005];
double R;

int main() {
    scanf("%d",&T);

    for(int i=0;i<T;i++)
        scanf("%d",&V[i]);

    sort(V,V+T);

    for(int i=0;i<T;i++)
        R += ((i%2)?-1.0:1.0) * (V[T-1-i]*V[T-1-i])*pi;

    printf("%.4f\n",R);

    return 0;
}
