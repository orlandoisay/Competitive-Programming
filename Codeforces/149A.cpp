#include <bits/stdc++.h>
using namespace std;

int n,r,a[15];

int main() {
    scanf("%d",&n);

    for(int i=0;i<12;i++)
        scanf("%d",&a[i]);

    sort(a,a+12);

    for(int i=11;i>=0;i--) {
        if(n>0) {
            n-= a[i];
            r++;
        }
    }

    if(n>0)
        printf("-1");
    else
        printf("%d",r);



    return 0;
}