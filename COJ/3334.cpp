#include <stdio.h>

int N,M,r;
char S[100005],P[100005];

int main() {
    scanf("%d %s %d %s",&N,S,&M,P);

    for(int i=0,j=0;i<N;i++) {
        if(S[i]==P[j])
            j=(j+1)%M;
        else
            r++;
    }

    if(N-r<M)
        printf("-1\n");
    else
        printf("%d\n",r+((N-r)%M));

    return 0;
}