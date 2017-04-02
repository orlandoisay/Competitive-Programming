#include <bits/stdc++.h>
using namespace std;

int N, L, C[26];
char buff[150];

int main() {
    fgets(buff,150,stdin);
    sscanf(buff,"%d", &N);

    while(N--) {
        memset(C, 0, sizeof(C));

        fgets(buff,150,stdin);
        L = strlen(buff);
        for(int i=0;i<L;i++)
            if(isalpha(buff[i])) C[buff[i]-'a']++;

        fgets(buff,150,stdin);
        L = strlen(buff);
        for(int i=0;i<L;i++)
            if(isalpha(buff[i])) C[buff[i]-'a']--;

        bool R = true;
        for(int i=0;i<26;i++)
            if(C[i]) R = false;

        printf("%s\n", R?"yes":"no");
    }
    return 0;
}
