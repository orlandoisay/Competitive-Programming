#include <bits/stdc++.h>
using namespace std;

int N,A[100000];

int main() {
    while(true) {
        scanf("%d",&N);
        if(!N)
            break;
        for(int i=0;i<N;i++)
            scanf("%d",&A[i]);
        sort(A,A+N);
        if(N%2==0) {
            printf("%0.1f\n",(double)(A[N/2]+A[N/2-1])/2);
        }
        else
            printf("%d.0\n",A[N/2]);
    }
    return 0;
}
