#include <stdio.h>

int g,b,k;

int main() {
    scanf("%d %d %d",&g,&b,&k);

    int teams = g/2 < b ? g/2 : b;

    k -= g - (teams*2);
    k -= b - teams;

    g -= g - (teams*2);
    b -= b - teams;

    teams = g/2 < b ? g/2 : b;

    if(k>0) {
        while(k%3)
            k++;
        teams -= k/3;
    }
    printf("%d\n",teams);
    return 0;
}
