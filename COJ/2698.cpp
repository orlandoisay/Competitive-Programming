#include <bits/stdc++.h>
using namespace std;

int R=0;
char str[30];

int main() {
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++){
        R+=(str[i]-'A'+1);
    }

    printf("%d\n",R);

    return 0;
}
