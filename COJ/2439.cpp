#include <bits/stdc++.h>
using namespace std;

int T,L,S;
vector <double > f;

int main() {
    f.push_back(1);
    for(int i=1;i<=1000;i++)
        f.push_back(f[i-1] * (5.0/3.0));

    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&L,&S);
        double X = double(S)/double(L);
        vector<double>::iterator it = upper_bound(f.begin(),f.end(),X);
        printf("%d\n",it - f.begin() - 1);
    }


    return 0;
}
