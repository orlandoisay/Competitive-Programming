#include <stdio.h>

int pow[]={5,25,125,625,3125,15625,78125,390625,1953125,9765625,48828125,244140625,1220703125};

int lucky(int x) {
    int luckyNumber=0,i=0;
    while(x) {
        if(x%2)
            luckyNumber+=pow[i];
        x/=2;
        i++;
    }
    return luckyNumber;
}

int T,N;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        printf("%d\n",lucky(N));
    }

    return 0;
}
