#include <stdio.h>

int n;
int m[10][10];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        m[i][0] = m[0][i] = 1;

    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++)
            m[i][j] = m[i][j-1] + m[i-1][j];

    printf("%d",m[n-1][n-1]);
    return 0;
}