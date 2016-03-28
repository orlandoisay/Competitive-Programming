#include <bits/stdc++.h>
using namespace std;

string toBin(int x) {
    string r = "";
    while(x) {
        r += (x%2)?"1":"0";
        x /= 2;
    }
    return r;
}

bool palindrome(string s) {
    for(int i=0;i<s.size()/2;i++)
        if(s[i] != s[s.size()-1-i])
            return false;
    return true;
}

int T,N;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        if(palindrome(toBin(N)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
