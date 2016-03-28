#include <stdio.h>

int N,Mx,A;

int main() {
    scanf("%d",&N);

    while(N--) {
        int a,b;
        scanf("%d %d",&a,&b);
        A += b-a;
        Mx = Mx < A ? A : Mx;
    }
    printf("%d",Mx);
    return 0;
}