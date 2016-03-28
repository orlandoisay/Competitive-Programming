#include <bits/stdc++.h>
using namespace std;

int DP[1005];
bool P[1005][1005];
string str;

int main() {
    cin >> str;

    for(int i=0;i<str.size();i++) {
        int a=i,b=i;
        while(a>=0 && b < str.size() && str[a] == str[b]) {
            P[a+1][b+1]=1;
            a--;
            b++;
        }
    }

    for(int i=0;i<str.size()-1;i++) {
        int a=i,b=i+1;
        while(a>=0 && b < str.size() && str[a] == str[b]) {
            P[a+1][b+1]=1;
            a--;
            b++;
        }
    }

    for(int i=1;i<=str.size();i++) {
        DP[i]=5000;

        for(int k=1;k<=i;k++)
            if(P[k][i])
                DP[i] = min(DP[i],DP[k-1]+1);
    }

    printf("%d\n",DP[str.size()]);
    return 0;
}
