#include <bits/stdc++.h>
#define LL long long
#define ip vector<LL>
using namespace std;

void readIp(ip &p) {
    p.resize(4);
    scanf("%lld.%lld.%lld.%lld", &p[0], &p[1], &p[2], &p[3]);
}

LL toNum(ip p) {
    LL N = 0;

    N += p[0] * 256 * 256 * 256;
    N += p[1] * 256 * 256;
    N += p[2] * 256;
    N += p[3];

    return N;
}

ip a;
ip b;

int main() {
    readIp(b);
    readIp(a);

    printf("%lld\n",toNum(b)-toNum(a)+1);

    return 0;
}
