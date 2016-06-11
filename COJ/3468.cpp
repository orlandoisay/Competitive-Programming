#include <bits/stdc++.h>
using namespace std;

int N;
map <string,int> M;
string S;
char buffer[15];

int main() {
    scanf("%d",&N);

    while(N--) {
        scanf("%s",buffer);
        S = buffer;
        sort(S.begin(),S.end());
        printf("%d\n",M[S]++);
    }
    return 0;
}
