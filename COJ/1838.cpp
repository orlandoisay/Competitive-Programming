#include <bits/stdc++.h>
using namespace std;

class Vertex {
public:
    int x,y,z;
    Vertex(){}
    Vertex(int _x,int _y,int _z) { x = _x, y = _y, z = _z; }
    Vertex operator +(Vertex b) { return Vertex(x+b.x,y+b.y,z+b.z); }
    Vertex operator -(Vertex b) { return Vertex(x-b.x,y-b.y,z-b.z); }
    Vertex operator *(Vertex b) { return Vertex(y*b.z-z*b.y,z*b.x-x*b.z,x*b.y-y*b.x); }
    void print() { printf("(%d,%d,%d)\n",x,y,z); }
};

int T;
Vertex A,B,C;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d %d %d %d %d %d %d %d",&A.x,&A.y,&A.z,&B.x,&B.y,&B.z,&C.x,&C.y,&C.z);
        C = ((B-A)*(C-A));
        if(!C.x && !C.y && !C.z)
            printf("NO\n");
        else
            printf("YES\n");
    }


    return 0;
}
