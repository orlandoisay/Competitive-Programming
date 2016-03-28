#include <stdio.h>

int n;

bool isLucky(int x) {
    while(x) {
        if(x%10 != 4 && x%10!=7)
            return false;
        x/=10;
    }
    return true;
}


int main() {
    scanf("%d",&n);

    for(int i=4;i<=777;i++){
        if(isLucky(i) && n % i == 0) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}