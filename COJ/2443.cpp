#include <stdio.h>

int n,k,x,np,p[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int imx,mx,current,isUnique=true;

bool isPrime(int r) {
    for(int i=0;i<25;i++)
        if(r == p[i])
            return true;
    return false;
}

int main() {
    scanf("%d %d",&n,&k);

    for(int i=1;i<=n;i++) {
        current=0;
        for(int j=0;j<k;j++) {
            scanf("%d",&x);
            if(isPrime(x))
                current++;
        }
        if(current == mx)
            isUnique=false;
        if(current > mx) {
            isUnique=true;
            mx = current;
            imx = i;
        }
    }

    if(isUnique)
        printf("Object %d wins with %d rare characteristics\n",imx,mx);
    else
        printf("No winner\n");
    return 0;
}
