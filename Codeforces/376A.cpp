#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

ll pivot;
ll bal;
char S[3000001];

int main() {
    scanf("%s",S);

    for(ll i=0;i<strlen(S);i++) {
        if(S[i] == '^'){
            pivot = i;
            break;
        }
    }

    for(ll i=0;i<strlen(S);i++) {
        if(S[i]>='0' && S[i]<='9') {
            bal += (pivot - i) * (S[i]-'0');

        }
    }

    if(bal>0)
        printf("left");
    else if(bal<0)
        printf("right");
    else
        printf("balance");
    return 0;
}