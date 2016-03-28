#include <bits/stdc++.h>
using namespace std;

int T;
float a,b,c,d;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%f %f %f %f",&a,&b,&c,&d);
        printf("%0.1f\n",abs(a*d-b*c)/2);
    }
    return 0;
}
