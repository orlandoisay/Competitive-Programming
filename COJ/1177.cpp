#include <bits/stdc++.h>
using namespace std;

int g;
char str[101];

int main() {
    while(true) {
        scanf("%d",&g);
        if(g==0)
            break;
        scanf("%s",str);

        int lg= strlen(str)/g;
        for(int i=0;i<g;i++) {
            reverse(str + (i*lg),str + lg+(i*lg));
        }
        printf("%s\n",str);
    }


    return 0;
}
