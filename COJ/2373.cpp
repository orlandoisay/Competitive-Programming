#include <bits/stdc++.h>
using namespace std;

int a,b,c,d,imx;
double mx=0;
double f() {
    return double(a)/double(b)+double(c)/double(d);
}

void rot() {
    int _a=c,_b=a,_c=d,_d=b;
    a=_a,b=_b,c=_c,d=_d;
}

int main() {
    scanf("%d %d %d %d",&a,&b,&c,&d);
    mx = f();

    for(int i=1;i<4;i++) {
        rot();
        if(f()>mx) {
            mx = f();
            imx = i;
        }
    }

    printf("%d\n",imx);


    return 0;
}
