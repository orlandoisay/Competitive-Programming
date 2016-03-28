#include <bits/stdc++.h>
using namespace std;

int T,C;
bool U[200];
char str[10005];

int main() {
    scanf("%d",&T);

    for(int i=0;i<T;i++) {
        scanf("%s",str);

        C=0;
        memset(U,0,sizeof(U));

        for(int j=0;j<strlen(str);j++) {
            if(!U[str[j]]) {
                U[str[j]]=true;
                C++;
            }
        }
        printf("%d\n",C);
    }
    return 0;
}
