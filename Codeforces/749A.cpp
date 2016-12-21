#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    scanf("%d", &n);

    if(n%2) {
        n -= 3;
        n/=2;
        printf("%d\n", n+1);
        for(int i=0;i<n;i++) {
            printf("2 ");
        }
        printf("3\n");
    }
    else {
        n/=2;
        printf("%d\n", n);
        for(int i=0;i<n;i++) {
            printf("2");
            if(i<n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}