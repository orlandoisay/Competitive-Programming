#include <bits/stdc++.h>
using namespace std;

int T, C[6];
char S[105];

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%s", S);
        for(int i=0;i<6;i++) C[i] = 0;

        for(int i=0;i<strlen(S);i++) {
            if(S[i] == 'B') C[0]++;
            if(S[i] == 'R') C[1]++;
            if(S[i] == 'O') C[2]++;
            if(S[i] == 'K') C[3]++;
            if(S[i] == 'E') C[4]++;
            if(S[i] == 'N') C[5]++;
        }

        for(int i=1;i<6;i++)
            C[i] -= C[0];
        C[0] = 0;

        if(!C[0] && !C[1] && !C[2] && !C[3] && !C[4] && !C[5])
            printf("No Secure\n");
        else
            printf("Secure\n");
    }
    return 0;
}
