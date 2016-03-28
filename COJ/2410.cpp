#include <stdio.h>

int T,A,N;
double P[]={0,1,2,4,8,16,32,64,128,256,512,1024,2048};

int main() {
    scanf("%d",&T);

    for(int i=0;i<T;i++) {
        scanf("%d %d",&A,&N);
        printf("Case #%d: %.2f\n",i+1,(double)(A*A)/P[N]+1e-6);
    }
    return 0;
}
