#include <stdio.h>
#define LIM 1000000

int t,r,a,b;
bool c[1000005];
int np, primo[80005];

void criba() {
    for(int i=2;i<LIM;i++) {
        if(!c[i]) {
            primo[np++]=i;
            for(int j=i;j<LIM;j+=i) {
                c[j]=true;
            }
        }
    }
//    printf("%d\n",np);
}

int p(int x) {
    if(x==0)
        return 1;
    if(x==1)
        return 2;
    if(x%2)
        return 2 * p(x-1);
    return p(x/2) * p(x/2);
}

int main() {
    criba();
    //printf("[%d]\n",primo[np-1]);
    scanf("%d",&t);

    while(t--) {
        scanf("%d %d",&a,&b);
        r=0;

        if(a==b) {
            printf("1\n");
            continue;
        }
        if(b%a) {
            printf("0\n");
            continue;
        }

        a = b/a;

        for(int i=0;i<np && a>1;i++) {
            if(a%primo[i]==0){
                r++;
                while(a%primo[i]==0)
                    a/=primo[i];
            }
        }
        if(a>1)
            r++;

        printf("%d\n",p(r-1));

    }

    return 0;
}