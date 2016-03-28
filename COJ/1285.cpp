#include <bits/stdc++.h>

typedef struct{
    int Id,P,O;
}team;

int N;
team L[100000];

bool S(team A,team B)
{
    if(A.P==B.P)
    {
        return A.O < B.O;
    }
    return A.P > B.P;
}

int main()
{
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d %d",&L[i].Id,&L[i].P);
        L[i].O=i;
    }

    std::sort(L,L+N,S);

    for(int i=0;i<N;i++)
        printf("%d %d\n",L[i].Id,L[i].P);
    return 0;
}
