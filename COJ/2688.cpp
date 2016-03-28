#include <bits/stdc++.h>
using namespace std;

char a[25],b[25];
int n,m,r,x,y;
bool sa[500],sb[500];

int main() {
    scanf("%s %s %d\n",a,a,&n);
    for(int i=0;i<n;i++) {
        scanf("%c%c",&x,&y);
        sa[x]=1;
    }
    scanf("%s %s %d\n",b,b,&m);
    for(int i=0;i<m;i++) {
        scanf("%c%c",&x,&y);
        sb[x]=1;
    }

    r=0;
    for(int i=0;i<500;i++)
        if(sa[i] || sb[i])
            r++;
    printf("%s U %s: {",a,b);
    for(int i=0;i<500;i++)
        if(sa[i] || sb[i]) {
            printf("%c",i);
            r--;
            if(r)
                printf(",");
        }
    printf("}\n");


    r=0;
    for(int i=0;i<500;i++)
        if(sa[i] && sb[i])
            r++;
    printf("%s I %s: {",a,b);
    for(int i=0;i<500;i++)
        if(sa[i] && sb[i]) {
            printf("%c",i);
            r--;
            if(r)
                printf(",");
        }
    printf("}\n");

    r=0;
    for(int i=0;i<500;i++)
        if(sa[i] && !sb[i])
            r++;
    printf("%s D %s: {",a,b);
    for(int i=0;i<500;i++)
        if(sa[i] && !sb[i]) {
            printf("%c",i);
            r--;
            if(r)
                printf(",");
        }
    printf("}\n");

     r=0;
    for(int i=0;i<500;i++)
        if(!sa[i] && sb[i])
            r++;
    printf("%s D %s: {",b,a);
    for(int i=0;i<500;i++)
        if(!sa[i] && sb[i]) {
            printf("%c",i);
            r--;
            if(r)
                printf(",");
        }
    printf("}\n");






    return 0;
}
