#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll p,i;
ll bn[20][20];

void init() {
    for(ll i=0;i<=18;i++) {
        bn[0][i]=1;
        bn[i][i]=1;
    }
    for(ll i=1;i<=18;i++) {
        for(ll j=i+1;j<=18;j++) {
            bn[i][j]=bn[i-1][j-1]+bn[i][j-1];
        }
    }
}

ll pot(ll b,ll x) {
    if(!x)
        return 1;
    if(x%2)
        return b * pot(b,x-1);
    return pot(b,x/2) * pot(b,x/2);
}

int main() {
    init();
    while(true) {
        scanf("%lld %lld",&p,&i);

        if(!p && !i)
            break;
        else if(!p)
            printf("%lld\n",2*pot(5,i));
        else if(!i && p==1)
            printf("9\n");
        else if(!i)
            printf("%lld\n",8*pot(5,p-1));
        else {
            printf("%lld\n",2*(bn[p-1][p+i-1]*4*pot(5,p+i-1)+bn[i-1][p+i-1]*pot(5,p+i)));
        }
    }
    return 0;
}
