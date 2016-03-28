#include <bits/stdc++.h>

int a,b,c,d,m1[100][100],m2[100][100],m3[100][100];

int main() {
    scanf("%d %d",&a,&b);

    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&m1[i][j]);

    scanf("%d %d",&c,&d);

    for(int i=0;i<c;i++)
        for(int j=0;j<d;j++)
            scanf("%d",&m2[i][j]);

    if(b != c) {
        printf("The matrices can not be multiplied\n");
    }
    else {
        for(int i=0;i<a;i++) {
            for(int j=0;j<d;j++) {
                for(int k=0;k<b;k++)
                    m3[i][j] += m1[i][k] * m2[k][j];
                printf("%d",m3[i][j]);
                if(j < d-1)
                    printf(" ");
            }
            printf("\n");
        }
    }


}
