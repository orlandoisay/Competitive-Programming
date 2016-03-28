#include <bits/stdc++.h>
using namespace std;

int N,MN;
int A[8],B[8];

bool f(int a,int b){
    return a>b;
}

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&A[i]);

    for(int i=0;i<N;i++)
        scanf("%d",&B[i]);

    sort(A,A+N);
    sort(B,B+N,f);

    for(int i=0;i<N;i++)
        MN += A[i]*B[i];


    printf("%d\n",MN);

    return 0;
}
