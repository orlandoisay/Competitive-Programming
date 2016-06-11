#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    scanf("%d",&N);

    switch(N%3) {
    case 1:
        printf("3");
        break;
    case 2:
        printf("1");
        break;
    }
    for(int i=0;i<(2*N/3);i++) printf("7");
    printf("\n");

    return 0;
}
