#include <bits/stdc++.h>
using namespace std;

int n;
set <int> s;

int main() {
    for(int i=0;i<4;i++) {
        scanf("%d",&n);
        s.insert(n);
    }

    printf("%d",4 - s.size());

    return 0;
}