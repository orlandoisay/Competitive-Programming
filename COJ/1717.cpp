#include <bits/stdc++.h>
using namespace std;

struct Step {
    int n, c;
    Step () {}
    Step(int _n,int _c) { n=_n, c=_c; }
};



int change(int original, int digit, int value) {
    int number = original;
    int dec = 1;
    for(int i=0;i<digit;i++)
        dec *= 10;
    number /= dec;
    number = (number*10) + value;
    number *= dec/10;
    number += (original%(dec/10));
    return number;
}

int T,A,B;
queue <Step> cola;
int P[10000];
bool NUM[10000];

int main() {
    for(int i=2;i<10000;i++) {
        if(NUM[i] == 0) {
            for(int j=i+i;j<10000;j+=i)
                NUM[j] = 1;
        }
    }

    scanf("%d",&T);
    while(T--) {
        scanf("%d %d",&A,&B);
        for(int i=0;i<10000;i++)
            P[i]=1000000;
        P[A] = 0;
        cola.push(Step(A,0));
        while(!cola.empty()) {
            Step act = cola.front();
            cola.pop();

            for(int digit=0;digit<4;digit++) {
                for(int j=0;j<10;j++) {
                    Step nv(change(act.n,digit+1,j),act.c+1);
                    if(nv.n>999 && nv.c < P[nv.n] && !NUM[nv.n]) {
                        P[nv.n] = nv.c;
                        cola.push(nv);
                    }
                }
            }
        }

        if(P[B] < 1000000)
            printf("%d\n",P[B]);
        else
            printf("Impossible\n");

    }
    return 0;
}
