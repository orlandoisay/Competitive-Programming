#include <bits/stdc++.h>
using namespace std;

int r;
char str[1005];
int v[]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};

int main() {
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++)
        r+=v[str[i]-'A'];

    printf("%d\n",r);

    return 0;
}
