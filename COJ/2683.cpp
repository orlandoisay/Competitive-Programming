#include <bits/stdc++.h>
using namespace std;

int t,n,b;
string dig = "0123456789ABCDEF";

string solve(int x,int nb) {
    string r="";
    while(x) {
        r = dig[x%nb] + r   ;
        x /=nb;
    }
    return r;
}

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d %d",&n,&b);
        printf("%s\n",solve(n,b).c_str());
    }

    return 0;
}
