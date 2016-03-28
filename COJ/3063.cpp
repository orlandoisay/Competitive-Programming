#include <bits/stdc++.h>
using namespace std;

int N,R[2];
int a[1020];

int dist(int x,int y) {
    return min(y-x, 24 - (y-x));
}

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);

    sort(a,a+N);

    for(int i=0;i<N;i+=2)
        R[0] += dist(a[i],a[i+1]);

    for(int i=1;i<N-1;i+=2)
        R[1] += dist(a[i],a[i+1]);
    R[1] += dist(a[0],a[N-1]);

    printf("%d\n",min(R[0],R[1]));

    return 0;
}
