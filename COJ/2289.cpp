#include <bits/stdc++.h>
using namespace std;

int T, N;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d", &N);

        if(N == 1) printf("1");
        if(N == 2) printf("2 1");
        if(N == 3) printf("3 1 2");
        if(N == 4) printf("2 1 4 3");
        if(N == 5) printf("3 1 4 5 2");
        if(N == 6) printf("4 1 6 3 2 5");
        if(N == 7) printf("5 1 3 4 2 6 7");
        if(N == 8) printf("3 1 7 5 2 6 8 4");
        if(N == 9) printf("7 1 8 6 2 9 4 5 3");
        if(N == 10) printf("9 1 8 5 2 4 7 6 3 10");
        if(N == 11) printf("5 1 6 4 2 10 11 7 3 8 9");
        if(N == 12) printf("7 1 4 9 2 11 10 8 3 6 5 12");
        if(N == 13) printf("4 1 13 11 2 10 6 7 3 5 12 9 8");

        printf("\n");
    }
    return 0;
}
