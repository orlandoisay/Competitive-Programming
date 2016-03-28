#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x,y;
};

int N,P[12];
double R=1000000,A,D[12][12];
Point L[12];

double dist(Point a,Point b) {
    double dx=a.x-b.x,dy=a.y-b.y;
    return sqrt(dx*dx+dy*dy);
}

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%lf %lf",&L[i].x,&L[i].y);
        P[i]=i;
    }

    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++)
            D[i][j]=D[j][i]=dist(L[i],L[j]);

    while(next_permutation(P,P+N)) {
        A=0.0;

        for(int i=0;i<N-1;i++) {
            A += D[P[i]][P[i+1]];
            if(A > R)
                break;
        }
        R = min(R,A);
    }

    printf("%.2f\n",R);

    return 0;
}
