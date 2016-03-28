#include <bits/stdc++.h>
using namespace std;

string s;
char buff[120];
int x;

bool f(string x) {
    for(int i=0;i<x.size();i++) {
        if(isupper(x[i]))
            x[i] = tolower(x[i]);
    }

    string r = "kroketten";
    return x == r;
}

int main() {
    while(scanf("%s",buff)!=EOF) {
        s = buff;
        if(x)
            printf(" ");

        if(f(s))
            printf("croqueta");
        else
            printf("%s",s.c_str());

        x++;
    }
    printf("\n");
    return 0;
}
