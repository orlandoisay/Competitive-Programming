#include <bits/stdc++.h>
using namespace std;

int n,t,r;
vector <int> imp;
bool can=false;

int main() {
    scanf("%d",&n);
    
    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        if(t%2) {
            can=true;
            imp.push_back(t);
        }
        else
            r+=t;        
    }
    
    if(imp.size()%2) {
        for(int i=0;i<imp.size();i++)
            r+=imp[i];
    }
    else {
        sort(imp.begin(),imp.end());
        for(int i=1;i<imp.size();i++)
            r+=imp[i];
    }
        
    
    if(!can)
        printf("-1\n");
    else
        printf("%d\n",r);
    
    return 0;
}