#include <bits/stdc++.h>
using namespace std;

int N,A[1000005];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d",&A[i]);
    sort(A,A+N);
    for(int i=0;i<N;i++)
        printf("%d\n",A[i]);
    return 0;
}
