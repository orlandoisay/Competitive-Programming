#include <bits/stdc++.h>
#define ll long long
#define fs first
#define sn second
using namespace std;

double resp,A,B,C,N;

int main() {
    while(1){
        scanf("%lf",&N);
        if(N==0)
            break;
        A=(N*(N+1)*((2*N)+1))/6;
        A*=4;
        B=2*(N+1)*N;
        C=N*N*N;
        resp=A-B+N-C;
        resp/=(N-1);
        resp=sqrt(resp);
        printf("%lf\n",resp);
    }
    return 0;
}
