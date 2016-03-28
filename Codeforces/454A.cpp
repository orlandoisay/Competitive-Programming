#include <stdio.h>

int n;

int main() {
    scanf("%d",&n);

    for(int i=0;i<n/2;i++) {
        for(int j=(n/2)-i;j>0;j--)
            printf("*");
        for(int j=0;j<(i*2+1);j++)
            printf("D");
        for(int j=(n/2)-i;j>0;j--)
            printf("*");
        printf("\n");
    }

    for(int i=0;i<n;i++)
        printf("D");
    printf("\n");

    for(int i=(n/2)-1;i>=0;i--) {
        for(int j=(n/2)-i;j>0;j--)
            printf("*");
        for(int j=0;j<(i*2+1);j++)
            printf("D");
        for(int j=(n/2)-i;j>0;j--)
            printf("*");
        printf("\n");
    }

    return 0;
}