#include <bits/stdc++.h>
using namespace std;

int G = 1;
char str[100005];

int main() {
    scanf("%s",str);

    char c = str[0];
    int l = strlen(str);

    for(int i=0;i<l;i++) {
        if(str[i] != c) {
            c = str[i];
            G++;
        }
    }

    printf("%d\n",G/2);


    return 0;
}
