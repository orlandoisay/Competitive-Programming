#include <bits/stdc++.h>
using namespace std;

int T,N;
char GAME[50005];

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %s",&N,GAME);
        printf("%c\n",GAME[strlen(GAME)-1]);
    }

    return 0;
}
