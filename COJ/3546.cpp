#include <bits/stdc++.h>
using namespace std;

struct Pack {
    int p, c;
    Pack() {};
    Pack(int _p, int _c) { p = _p, c = _c; };
};

bool operator<(Pack a, Pack b) {
    return a.p * b.c < b.p * a.c;
}

int N, R, P, C;
Pack MN, ACT;

int main() {
    scanf("%d",&N);

    for(int i=1;i<=N;i++) {
        scanf("%d %d",&P,&C);
        ACT = Pack(P,C);

        if(R) {
            if(ACT < MN) {
                MN = ACT;
                R = i;
            }
        }
        else {
            MN = ACT;
            R = i;
        }
    }

    printf("%d\n",R);



    return 0;
}
