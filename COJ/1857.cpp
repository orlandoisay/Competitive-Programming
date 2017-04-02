#include <bits/stdc++.h>
using namespace std;

double a,b,c,s,r;

int main() {
    while(scanf("%lf %lf %lf",&a,&b,&c) != EOF) {
        s=(a+b+c)/2.0;

        if(s == 0.0) {
            printf("The radius of the round table is: 0.000\n",r);
            continue;
        }
        r= sqrt((s-a)*(s-b)*(s-c)/s);
        printf("The radius of the round table is: %.3f\n",r);
    }
    return 0;
}
