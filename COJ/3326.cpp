#include <bits/stdc++.h>
using namespace std;

int t,n;
char buffer[15];
string a[1000];

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);

        for(int i=0;i<n;i++) {
            scanf("%s",buffer);
            a[i]=buffer;
        }

        for(int i=0;i<n-1;i++) {
            if(a[i]<a[i+1])
                printf("%d ",i+2);
            else
                printf("-1 ");
        }
        printf("-1\n");
    }
    return 0;
}