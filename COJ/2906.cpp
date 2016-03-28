#include <bits/stdc++.h>
using namespace std;

int N;
int A[120],B[120],O[120],P[120];
bool U[120];
int mx,act,cn;
bool R=false;

int main() {
    scanf("%d",&N);

    for(int i=1;i<=N;i++) {
        scanf("%d",&A[i]);
        O[A[i]]=i;
    }
    for(int i=1;i<=N;i++) {
        scanf("%d",&B[i]);
        P[B[i]]=i;
    }

    for(int i=1;i<=N;i++) {
        if(!U[i] && O[i] != P[i]) {
            R=true;
            int cur = i;
            act=0;
            while(!U[cur]) {
                U[cur]=true;

                act++;
                cur = A[P[cur]];
            }

            mx = max(mx,act);
            cn++;
        }


    }
    if(R)
        printf("%d %d\n",cn,mx);
    else
        printf("0 -1\n");
    return 0;
}
