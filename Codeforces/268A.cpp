#include <bits/stdc++.h>
using namespace std;

int n,r;
pair <int,int> uniforms[120];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d %d",&uniforms[i].first,&uniforms[i].second);

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(uniforms[i].first == uniforms[j].second && i!=j)
                r++;
        }
    }

    printf("%d",r);

    return 0;
}