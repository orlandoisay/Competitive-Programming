#include <bits/stdc++.h>
using namespace std;

char key[1005], str[100005];
int lk, ls;

int main() {
    while(true) {
        scanf("%s", key);
        if(key[0] == '0') break;
        scanf("%s", str);

        lk = strlen(key);
        ls = strlen(str);

        for(int i=0;i<ls;i++) {
            int dis = key[i%lk] - 'A' + 1;
            printf("%c", ((str[i] - 'A' + dis)%26) + 'A');
        }
        printf("\n");
    }

    return 0;
}
