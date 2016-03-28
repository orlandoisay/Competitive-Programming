#include <stdio.h>
#include <string.h>

int R;
bool u[26];
char str[200];

int main() {
    scanf("%s", str);

    for(int i=0;i<strlen(str);i++)
        u[str[i]-'a']=true;

    for(int i=0;i<26;i++)
        if(u[i])
            R++;

    if(R%2)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");

    return 0;
}