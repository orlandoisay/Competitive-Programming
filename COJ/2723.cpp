#include <bits/stdc++.h>
using namespace std;

int n,r,v,a[1000];

int main() {
    scanf("%d %d",&v,&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    if(a[0]+a[1]+a[2]<=v) {
        r=3;
        for(int i=3;i<n;i++)
            if(a[0]+a[1]+a[i]<=v)
                r++;
            else
                break;
        printf("%d\n",r);
    }
    else
        printf("0\n");

    return 0;
}
