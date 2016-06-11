#include <bits/stdc++.h>
using namespace std;

char c;
int v[5];

int main() {
    while(scanf("%c",&c)!=EOF) {
        switch(c) {
        case 'a':
        case 'A':
            v[0]++;
            break;
        case 'e':
        case 'E':
            v[1]++;
            break;
        case 'i':
        case 'I':
            v[2]++;
            break;
        case 'o':
        case 'O':
            v[3]++;
            break;
        case 'u':
        case 'U':
            v[4]++;
            break;
        }
    }

    for(int i=0;i<4;i++)
        printf("%d ",v[i]);
    printf("%d\n",v[4]);

    return 0;
}
