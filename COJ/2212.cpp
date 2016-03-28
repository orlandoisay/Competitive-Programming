#include <bits/stdc++.h>

int T,D[30];
char str[50];

int main() {
    scanf("%d",&T);

    while(T--) {
        memset(D,0,sizeof(D));

        scanf("%s",str);
        for(int i=0;i<strlen(str);i++)
            D[str[i]-'A'] = 1;

        scanf("%s",str);
        for(int i=0;i<strlen(str);i++)
            D[str[i]-'A']--;

        scanf("%s",str);
        for(int i=0;i<strlen(str);i++)
            D[str[i]-'A']--;

        bool CHEATER = false;

        for(int i=0;i<26;i++) {
            if(D[i]<0) {
                CHEATER = true;
                break;
            }
        }

        if(CHEATER) {
            printf("CHEATER\n");
            continue;
        }

        for(int i=0;i<26;i++)
            if(D[i] == 1)
                printf("%c",i+'A');
        printf("\n");
    }
    return 0;
}
