#include <bits/stdc++.h>
using namespace std;

int N, K, I, V, S[2];
char OP[3], NUM[100005];

void change(int i) {
    S[i%2] += (NUM[i] == '1') ? -1 : 1;
    NUM[i] = 1 - (NUM[i]-'0') + '0';
}

int main() {
    scanf("%d %d",&N,&K);
    scanf("%s",NUM);

    reverse(NUM,NUM+N);

    for(int i=0;i<N;i++)
        if(NUM[i] == '1') S[i%2]++;

    while(K--) {
        scanf("%s",OP);
        if(OP[0] == 'P')
            printf("%s\n", abs(S[0]-S[1])%3 == 0 ? "Yes" : "No");
        if(OP[0] == 'C') {
            scanf("%d",&I);
            change(I);
        }
        if(OP[0] == 'S') {
            scanf("%d %d",&I,&V);
            if(NUM[I] != V + '0')
                change(I);
        }
    }
    return 0;
}
