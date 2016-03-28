#include <bits/stdc++.h>
using namespace std;

int len;
char n[120];
char res[50];

int toOctal(int i) {
    return (n[i]=='1'?1:0) + 2 *(n[i+1]=='1'?1:0) + 4 * (n[i+2]=='1'?1:0);
}

int main() {
    scanf("%s",n);
    len = strlen(n);

    reverse(n,n+len);

    for(int i=0;i<34;i++)
        res[i]=toOctal(i*3)+'0';

    int i=49;
    while(res[i]<'1'||res[i]>'9')
        i--;
    while(i>=0) {
        printf("%c",res[i]);
        i--;
    }
    printf("\n");

    return 0;
}
