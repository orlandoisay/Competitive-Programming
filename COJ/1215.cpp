#include <bits/stdc++.h>
using namespace std;

int T,A[20],it;
char buffer[60];

int main() {
    scanf("%d",&T);

    for(int k=1;k<=T;k++) {
        scanf("%s",buffer);
        memset(A,0,sizeof(A));
        it=0;

        for(int i=0;i<strlen(buffer);i++) {
            if(buffer[i]=='*')
                A[it]=1;
            else if(buffer[i]==')')
                it++;
        }

        printf("Case %d: %d%d:%d%d:%d%d\n",k,
               2*A[0]+A[1],
               8*A[2]+4*A[3]+2*A[4]+A[5],
               4*A[6]+2*A[7]+A[8],
               8*A[9]+4*A[10]+2*A[11]+A[12],
               4*A[13]+2*A[14]+A[15],
               8*A[16]+4*A[17]+2*A[18]+A[19]);

    }
    return 0;
}
