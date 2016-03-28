#include <bits/stdc++.h>
using namespace std;

int T,A,B,C;
char OP[2],EQ[2];

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %s %d %s %d",&A,OP,&B,EQ,&C);

        if(OP[0]=='+' && A+B==C)
            printf("Yes\n");
        else if(OP[0]=='-' && A-B==C)
            printf("Yes\n");
        else if(OP[0]=='*' && A*B==C)
            printf("Yes\n");
        else if(OP[0]=='/' && B && A%B==0 && A/B==C)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
