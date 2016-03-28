#include <bits/stdc++.h>
using namespace std;

int t;
int n,p,j,f;
bool W[520],F[520],R[520];
int r1,r2;
int r1x,r2x;

int main() {
    scanf("%d",&t);

    while(t--) {
        memset(W,0,sizeof(W));
        memset(F,0,sizeof(F));
        memset(R,0,sizeof(R));
        r1=r2=r1x=r2x=0;
        scanf("%d %d %d %d",&n,&p,&j,&f);

        for(int i=1;i<=p;i++)
            W[i]=true;
        for(int i=0;i<j;i++) {
            int x;
            scanf("%d",&x);
            R[x]=true;
        }
        for(int i=0;i<f;i++) {
            int x;
            scanf("%d",&x);
            F[x]=true;
        }

        for(int i=1;i<=n;i++) {
            if(!R[i] && !F[i] && !W[i])
                r1++;
            if(R[i] && (F[i] || W[i]))
                r2++;
        }
        printf("%d",r1);
        for(int i=1;i<=n;i++) {
            if(!R[i] && !F[i] && !W[i])
                printf(" %d",i);
        }
        printf("\n");
        printf("%d",r2);
        for(int i=1;i<=n;i++) {
            if(R[i] && (F[i] || W[i]))
                printf(" %d",i);
        }
        printf("\n");
    }

    return 0;
}
