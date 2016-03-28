#include <stdio.h>

int N,R;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a+b+c > 1)
            R++;
    }

    printf("%d",R);
    return 0;
}