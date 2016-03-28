#include <bits/stdc++.h>
using namespace std;

char str[250];

int main() {
    while(scanf("%s",str)!=EOF) {
        if(str[0]=='*')
            break;

        int R=0,A=0;

        for(int i=0;i<strlen(str);i++) {
            if(str[i]=='/') {
                if(A==64) R++;
                A=0;
            }

            switch(str[i]) {
            case 'W':
                A+=64;
                break;
            case 'H':
                A+=32;
                break;
            case 'Q':
                A+=16;
                break;
            case 'E':
                A+=8;
                break;
            case 'S':
                A+=4;
                break;
            case 'T':
                A+=2;
                break;
            case 'X':
                A+=1;
                break;
            }
        }

        printf("%d\n",R);
    }
    return 0;
}
