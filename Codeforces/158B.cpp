#include <stdio.h>

int n,t,r,a[5];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        a[t]++;
    }

    r = a[4];
    r+= a[3];

    if(a[3]> a[1])
        a[1]=0;
    else
        a[1]-=a[3];

    r+=a[2]/2;
    a[2]%=2;


    if(a[2]>0) {
        a[1]-=2;
        r++;
    }

    if(a[1]>0){
        while(a[1]%4)
            a[1]++;
        r+=a[1]/4;
    }


    printf("%d",r);

    return 0;
}