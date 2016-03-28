#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,r;
vector <ll> a;
int main() {
    scanf("%I64d",&n);
    a.resize(n);

    for(int i=0;i<n;i++)
        scanf("%I64d",&a[i]);

    sort(a.begin(),a.end());

    for(int i=0;i<=n-2;i++)
        r+= a[i] * (i+2);

    r+= a[n-1] * n;

    printf("%I64d",r);

    return 0;
}