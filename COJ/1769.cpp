#include <bits/stdc++.h>
using namespace std;

int l;
char a[100005],b[100005];
bool au[26],bu[26];

bool usingA() {
    for(int i=0;i<26;i++)
        if(bu[i] && !au[i])
            return false;
    return true;
}

bool usingB() {
    for(int i=0;i<26;i++)
        if(au[i] && !bu[i])
            return false;
    return true;
}

int main() {
    scanf("%s %s",a,b);

    l=strlen(a);
    for(int i=0;i<l;i++)
        au[a[i]-'a']=true;

    l=strlen(b);
    for(int i=0;i<l;i++)
        bu[b[i]-'a']=true;

    if(usingA() || usingB())
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
