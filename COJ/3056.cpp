#include <stdio.h>

int a[10];

int main() {
    while(scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9])!=EOF) {
        bool r = true;

        for(int i=0;i<5;i++) {
            if(a[i]==a[i+5]) {
                r=0;
                break;
            }
        }

        if(r)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
