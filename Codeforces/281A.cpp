#include <stdio.h>
#include <string.h>
#include <algorithm>

char str[1005];

int main() {
    scanf("%s",str);

    if(islower(str[0]))
        str[0]-=32;

    printf("%s",str);

    return 0;
}