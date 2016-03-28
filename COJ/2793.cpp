#include <bits/stdc++.h>
using namespace std;

int K,m,mi;
vector <int> r,s;

int main() {
    scanf("%d",&K);

    for(int i=1;i<=K;i++)
        s.push_back(i);

    scanf("%d",&m);

    for(int i=0;i<m;i++) {
        scanf("%d",&mi);
        r = s;
        s.clear();
        for(int j=1;j<=r.size();j++)
            if(j%mi)
                s.push_back(r[j-1]);
    }

    for(int i=0;i<s.size();i++)
        printf("%d\n",s[i]);
    return 0;
}
