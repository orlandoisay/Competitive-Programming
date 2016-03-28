#include <stdio.h>

int n,v[50],a[50];

int main() {
    while(true) {
        scanf("%d",&n);
        if(!n)
            break;

        for(int i=0;i<n;i++)
            scanf("%d",&v[i]);

        a[0]=v[0];

        for(int i=1;i<n;i++)
            a[i] = v[i] + a[i-1];

        int r = -1;

        for(int i=0;i<n-1;i++) {
            if(a[i] == a[n-1] - a[i]) {
                r = i+1;
                break;
            }
        }

        if(r != -1)
            printf("Sam stops at position %d and Ella stops at position %d.\n",r,r+1);
        else
            printf("No equal partitioning.\n");

    }
    return 0;
}
