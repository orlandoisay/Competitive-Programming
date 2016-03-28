#include <bits/stdc++.h>

int a,b,c,k=1;

int main() {
    while(scanf("%d %d %d",&a,&b,&c)!=EOF) {
        printf("Case %d: ",k);
        if(a+b==c)
            printf("%d+%d=%d",a,b,c);
        else if(a==b+c)
            printf("%d=%d+%d",a,b,c);
        else if(a-b==c)
            printf("%d-%d=%d",a,b,c);
        else if(a==b-c)
            printf("%d=%d-%d",a,b,c);
        else if(a*b==c)
            printf("%d*%d=%d",a,b,c);
        else if(a==b*c)
            printf("%d=%d*%d",a,b,c);
        else if(b && a/b==c)
            printf("%d/%d=%d",a,b,c);
        else if(c && a==b/c)
            printf("%d=%d/%d",a,b,c);

        printf("\n");
        k++;
    }
    return 0;
}
