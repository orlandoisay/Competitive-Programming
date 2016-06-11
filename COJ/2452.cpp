#include <bits/stdc++.h>
#define ll long long
using namespace std;

int T,N;
double R;
map <ll,double> M;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);

        R = 0.0;

        M.clear();

        for(int i=0;i<N;i++) {
            ll id;
            double cost;

            scanf("%lld %lf",&id,&cost);

            if(M.find(id) == M.end())
                M[id] = cost;
            if(cost < M[id])
                M[id] = cost;
        }

        for(map<ll,double>::iterator it = M.begin();it!=M.end();it++)
            R += it->second;

        printf("%.2f\n",R);
    }
    return 0;
}
