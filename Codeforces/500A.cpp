#include <stdio.h>

int N,R,T;
int A[40000];

int main(){
    scanf("%d %d",&N,&R);
    for(int i=0;i<N-1;i++)
        scanf("%d",&A[i]);
    while(T<N){
        if(T==R-1){
            printf("YES");
            break;
        }
        if(T>=R){
            printf("NO");
            break;
        }
        T+=A[T];
    }
    return 0;
}