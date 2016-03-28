#include <stdio.h>
#include <algorithm>

int n;

int d(int x,int y) {
    return std::abs(x-n) + std::abs(y-n);
}

int main() {
    scanf("%d",&n);

    for(int i=0;i<(n+1)*2 -1;i++) {
        for(int j=0;j<(n+1)*2;j++) {
            if(n-d(i,j)>=0) {
                printf("%c",'0'+n-d(i,j));
                if(n-d(i,j) || j<n)
                    printf(" ");
            }
            else if(j<=n)
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}