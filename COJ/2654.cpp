#include <bits/stdc++.h>
using namespace std;

int N;

string solve(int X) {
    X = X + 1;
    string r = "";
    while(X>1) {
        r += (X%2)?'7':'4';
        X /= 2;
    }
    reverse(r.begin(),r.end());
    return r;
}

int main() {
    scanf("%d",&N);
    printf("%s\n",solve(N).c_str());
    return 0;
}
