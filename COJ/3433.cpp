#include <stdio.h>

int X,Y,Z;
bool L[105],S[105];
int A,B,C;

int main() {
    scanf("%d %d",&X,&Y);

    for(int i=0;i<X;i++) {
        scanf("%d",&Z);
        L[Z] = true;
    }

    for(int i=0;i<Y;i++) {
        scanf("%d",&Z);
        S[Z] = true;
    }

    for(int i=1;i<=100;i++) {
        if(!L[i]&&!S[i])
            A++;
        if(L[i]&&!S[i])
            B++;
        if(!L[i]&&S[i])
            B++;
        if(L[i]&&S[i])
            C++;
    }

    printf("Unsolvable: %d\nWeakly solvable: %d\nStrongly solvable: %d\n",A,B,C);

    return 0;
}
