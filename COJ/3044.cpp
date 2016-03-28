#include <stdio.h>
#define ll long long

ll A[101][101],
    DP[101][101];

ll a1,a2,b1,b2,
    c1,c2,d1,d2;

ll a,b;

void init() {
    for(ll i=1;i<=100;i++) {
        for(ll j=1;j<=100;j++) {
            A[i][j] = i+j;
        }
    }
    for(ll i=1;i<=100;i++) {
        for(ll j=1;j<=100;j++) {
            DP[i][j] = A[i][j] + DP[i-1][j] + DP[i][j-1] - DP[i-1][j-1];
        }
    }
}

int main() {
    init();

    scanf("%lld %lld %lld %lld",&a1,&a2,&b1,&b2);
    scanf("%lld %lld %lld %lld",&c1,&c2,&d1,&d2);

    a = (DP[a2][b2] - DP[a1-1][b2] - DP[a2][b1-1] + DP[a1-1][b1-1]) * ((c2-c1+1)*(d2-d1+1));
    b = (DP[c2][d2] - DP[c1-1][d2] - DP[c2][d1-1] + DP[c1-1][d1-1]) * ((a2-a1+1)*(b2-b1+1));


    if(a>b)
        printf("Gunnar\n");
    else if(a<b)
        printf("Emma\n");
    else
        printf("Tie\n");
    return 0;
}
