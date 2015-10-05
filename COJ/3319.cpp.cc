#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t,n,r;
ll p[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

int main() { 
    scanf("%lld",&t);
    
    while(t--) {
        scanf("%lld",&n);
        r=1;
        for(int i=0;i<15;i++) 
            if(p[i]<=n) 
                r*=p[i];
        printf("%lld\n",r);
    }
    
    return 0;
}