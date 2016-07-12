#include <bits/stdc++.h>
using namespace std;

int N;
double R, Ra, W, We, K, Avg;
char S[35], L[35];

int main() {
    scanf("%s %d",S,&N);

    printf("Tournament: %s\n", S);
    printf("Number of players: %d\n", N);
    printf("New ratings:\n");

    for(int i=0;i<N;i++) {
        scanf("%s %lf %lf %lf %lf",L,&Ra,&W,&We,&K);
        Avg += Ra;
        R = Ra + K * (W - We);
        printf("%s %.0f\n",L,R);
    }

    printf("Media Elo: %.0f\n", Avg / (double)N );

    return 0;
}
