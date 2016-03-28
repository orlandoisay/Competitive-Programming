#include <stdio.h>
#define ll long long

ll P[10][5] = {
    {0,0,0,0,1},
    {1,0,0,0,1},
    {6,2,4,8,4},
    {1,3,9,7,4},
    {6,4,0,0,2},
    {5,0,0,0,1},
    {6,0,0,0,1},
    {1,7,9,3,4},
    {6,8,4,2,4},
    {1,9,0,0,2}
};

ll T,A,B;

int main() {
    scanf("%lld",&T);

    while(T--) {
        scanf("%lld %lld",&A,&B);

        if(!B) {
            printf("1\n");
            continue;
        }

        A%=10;
        printf("%lld\n",P[A][B%P[A][4]]);
    }
    return 0;
}
