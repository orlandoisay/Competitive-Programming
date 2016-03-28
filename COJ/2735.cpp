#include <bits/stdc++.h>
using namespace std;

class F {
public:
    int ind,g,s,b;

    F() {}

    F(int _ind,int _g,int _s,int _b) {
        ind = _ind, g = _g, s = _s, b = _b;
    }

    void p() {
        printf("Facultad %d %d %d %d\n",ind,g,s,b);
    }
};

bool operator <(F a,F b) {
    if(a.g == b.g) {
        if(a.s == b.s) {
            if(a.b == b.b) {
                return a.ind < b.ind;
            }
            return a.b > b.b;
        }
        return a.s > b.s;
    }
    return a.g > b.g;
}

int a,b,c;
F L[7];

int main() {
    for(int i=0;i<7;i++) {
        scanf("%d %d %d",&a,&b,&c);
        L[i] = F(i+1,a,b,c);
    }

    sort(L,L+7);

    for(int i=0;i<7;i++)
        L[i].p();
    return 0;
}
