#include <bits/stdc++.h>
using namespace std;

struct P {
    int x, y;

    P() {}

    P(int _x, int _y) { x = _x, y = _y; }

    P operator -(P p) {
        return P(x - p.x, y - p.y);
    }
};


struct T {
    string name;
    double A;

    T() {}

    T(string _n, P a, P b, P c) {
        name = _n;
        P n = b - a;
        P m = c - a;

        A = double(abs(n.x * m.y - n.y * m.x)) / 2.0;
    }

    void print() {
        printf("%s %.2f km^2\n", name.c_str(), A);
    }
};

bool operator <(T a, T b) {
        return a.A > b.A;
    }

int N, x, y;
string s;
char buffer[100];
T L[1000];

int main() {
    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%s", buffer);

        s = buffer;

        P l[3];

        for(int k=0;k<3;k++) {
            scanf("%d %d", &x, &y);
            l[k] = P(x,y);
        }

        L[i] = T(s,l[0],l[1],l[2]);
    }

    sort(L,L+N);

    L[0].print();


    return 0;
}
