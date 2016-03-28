#include <bits/stdc++.h>
using namespace std;

int t,w,p,a[100];
bool u[101];

int main() {
    scanf("%d %d",&w,&p);

    for(int i=0;i<p;i++)
        scanf("%d",&a[i]);
    a[p]=w;

    for(int i=0;i<=p;i++) {
        u[a[i]]=1;
    }

    for(int i=0;i<p;i++) {
        for(int j=i+1;j<=p;j++) {
            u[a[j]-a[i]]=1;
        }
    }

    for(int i=1;i<=w;i++)
        if(u[i])
            t++;

    for(int i=1,x=0;i<=w;i++) {
        if(u[i]) {
            printf("%d",i);
            x++;
            if(x<t)
                printf(" ");
        }
    }

    printf("\n");


    return 0;
}
