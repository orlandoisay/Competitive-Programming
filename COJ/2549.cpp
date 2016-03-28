#include <bits/stdc++.h>
#define INF 1000000
using namespace std;

struct Point {
    int x,y;

    Point() {
    }

    Point(int _x,int _y) {
        x=_x,y=_y;
    }

    Point operator +(Point b) {
        return Point(x+b.x,y+b.y);
    }

    Point operator -(Point b) {
        return Point(x-b.x,y-b.y);
    }

    double distance(Point b) {
        return sqrt((x-b.x)*(x-b.x)+(y-b.y)*(y-b.y));
    }
};

int N;
Point Pos,Orig,L[1000];
double dist = INF;

int main() {
    scanf("%d",&N);

    Pos = Orig = Point(0,0);

    for(int i=0;i<N;i++) {
        scanf("%d %d",&L[i].x,&L[i].y);
        Pos = Pos + L[i];
    }

    printf("%d %d\n",Pos.x,Pos.y);

    for(int i=0;i<N;i++) {
        Point nv = Pos - L[i];
        dist = min(dist,nv.distance(Orig));
    }

    printf("%.2f\n",dist);

    return 0;
}
