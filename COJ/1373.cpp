#include <bits/stdc++.h>
using namespace std;

int T,N,A[1000],x,tmp;

bool M(int a,int b) {
    return a>b;
}

void p() {
    for(int i=0;i<N;i++){
        printf("%d",A[i]);
        if(i<N-1)
            printf(" ");
    }
}

int main() {
    scanf("%d",&T);
    printf("%d",T);

    for(int k=0;k<T;k++) {
        printf("\n\n");
        scanf("%d",&N);
        printf("%d\n",N);

        for(int i=0;i<N;i++)
            scanf("%d",&A[i]);

        sort(A,A+N);

        x=N-1;
        while(A[x]==A[N-1])
            x--;
        x++;

        tmp=A[x];
        A[x]=A[x-1];
        A[x-1]=tmp;

        p();
        printf("\n");

        sort(A,A+N,M);

        x=N-1;
        while(A[x]==A[N-1])
            x--;
        x++;

        tmp=A[x];
        A[x]=A[x-1];
        A[x-1]=tmp;


        p();
    }
    return 0;
}
