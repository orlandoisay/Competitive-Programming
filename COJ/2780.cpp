#include <bits/stdc++.h>
using namespace std;

int n,r;
int squares[505];
bool sqr[255000];

int main() {
    for(int i=1;i<=500;i++){
        squares[i]=i*i;
        sqr[i*i]=1;
    }
    scanf("%d",&n);

    for(int i=1;i<=500;i++) {
        if(sqr[squares[i]+n])
            r++;
    }
    printf("%d\n",r);

    return 0;
}
