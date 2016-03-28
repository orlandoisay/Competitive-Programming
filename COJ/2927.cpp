#include <bits/stdc++.h>
using namespace std;

int N,M,A,B;
vector <int> ady[1005];
int U[1005];
bool R = true;

void f(int node,int room) {
    if(U[node]!=-1) {
        if(U[node]==1-room)
            R=false;
        return;
    }

    U[node]=room;

    for(int i=0;i<ady[node].size();i++)
        f(ady[node][i],1-room);
}

int main() {
    scanf("%d %d",&N,&M);

    for(int i=0;i<M;i++) {
        scanf("%d %d",&A,&B);
        ady[A].push_back(B);
        ady[B].push_back(A);
    }

    memset(U,-1,sizeof(U));

    for(int i=1;i<=N;i++) {
        if(!R)
            break;
        if(U[i]==-1)
            f(i,0);
    }

    if(R)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
