#include <bits/stdc++.h>
using namespace std;

int N, K;
double R,X1,X2,Y1,Y2;

double dist() {
    return sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));
}

int main() {

    while(scanf("%d %d",&N,&K)!=EOF) {
        R = 0.0;
        scanf("%lf %lf",&X1,&Y1);

        for(int i=1;i<N;i++) {
            scanf("%lf %lf",&X2,&Y2);
            R += dist();
            X1=X2;
            Y1=Y2;
        }
        R *= (double)K;
        R /= 50.0;
        printf("%.5f\n",R);
    }
    return 0;
}
