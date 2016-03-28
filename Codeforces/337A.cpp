#include <bits/stdc++.h>

int N,M,R=1000;
int A[1000];

int main(){
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++)
        scanf("%d",&A[i]);
        
    std::sort(A,A+M);
    
    for(int i=0;i+N-1<M;i++)
        R=A[i+N-1]-A[i]<R?A[i+N-1]-A[i]:R;
    
    printf("%d",R);
    
    return 0;
}