#include <bits/stdc++.h>
using namespace std;

char N[105], M[105];

int main() {
    while(scanf("%s %s",M,N)) {
        if(M[0]=='0' && N[0]=='0') break;

        int D = M[strlen(M)-1] - '0';

        if(strlen(N) == 1) {
            printf("%d\n",(int)pow(D,N[0]-'0')%10);
            continue;
        }

        int P = 10 * (N[strlen(N)-2] - '0') + N[strlen(N)-1] - '0';

        if(D%5<2)
            printf("%d\n",D);
        else if (D%5==4)
            printf("%d\n",(int)pow(D,2+(P%2))%10);
        else
            printf("%d\n",(int)pow(D,4+(P%4))%10);
    }

    return 0;
}
