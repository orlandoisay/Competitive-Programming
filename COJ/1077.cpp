#include <bits/stdc++.h>

using namespace std;

long long int i,j,mx,a,b;

int main(){
    while(scanf("%lld %lld",&i,&j)!=EOF){
        mx=0;
        for(long long int k=min(i,j);k<=max(i,j);k++){

            a=k;
            b=1;

            while(a!=1){
                if(a%2!=0)
                    a=(a*3)+1;
                else
                    a>>=1;
                b++;
            }
            mx=max(mx,b);
        }
        printf("%lld %lld %lld\n",i,j,mx);
    }
    return 0;
}
