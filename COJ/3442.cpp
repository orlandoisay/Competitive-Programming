#include <bits/stdc++.h>
using namespace std;

char word[25];

void spaces(int x) {
    for(int i=0;i<x;i++)
        printf(" ");
}

int main() {
    scanf("%s", word);

    if(strlen(word)%2 == 0) {
        printf("error\n");
        return 0;
    }


    int midlen = strlen(word)/2;

    printf("%s\n",word);
    for(int i=0;i<midlen-1;i++) {
        for(int j=0;j<midlen-i;j++)
            printf("%c",word[j]);

        spaces(2*i+1);

        for(int j=0;j<midlen-i;j++)
            printf("%c",word[midlen+ 1 + i + j]);
        printf("\n");
    }

    printf("%c",word[0]);
    spaces(strlen(word)-2);
    printf("%c\n",word[strlen(word)-1]);

    for(int i=midlen-2;i>=0;i--) {
        for(int j=0;j<midlen-i;j++)
            printf("%c",word[j]);

        spaces(2*i+1);

        for(int j=0;j<midlen-i;j++)
            printf("%c",word[midlen+ 1 + i + j]);
        printf("\n");
    }


    printf("%s\n",word);

    return 0;
}
