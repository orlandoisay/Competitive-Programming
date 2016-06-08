#include <bits/stdc++.h>
using namespace std;

bool res;
char orig[105], fin[105];
int mn[27], ma[27];
string atsa, ratsa;

int main() {
    while(true) {
        res = true;
        scanf("%s",orig);
        if(orig[0] == '0') break;
        scanf("%s",fin);

        memset(mn,0,sizeof(mn));
        memset(ma,0,sizeof(ma));

        for(int i=0;i<strlen(fin);i++) {
            char c = fin[i];
            if(c >= 'a' && c <= 'z') {
                mn[c-'a'] = 1;
            }
            if(c >= 'A' && c <= 'Z') {
                ma[c-'A'] = 1;

            }
        }

        for(int i = 0 ;i < strlen(orig); i++) {
            char c = orig[i];
            if(c >= 'a' && c <= 'z') {
                if(!mn[c-'a'])
                    orig[i] = '-';
            }
            if(c >= 'A' && c <= 'Z') {
                if(!ma[c-'A'])
                    orig[i] = '-';
            }
        }

        atsa = "";

        for(int i = 0 ;i < strlen(orig); i++)
            if(orig[i] != '-') atsa += orig[i];

        ratsa = fin;

        if(atsa == ratsa)
            printf("POSIBLE\n");
        else
            printf("IMPOSIBLE\n");
    }

    return 0;
}
