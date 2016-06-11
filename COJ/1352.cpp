#include <bits/stdc++.h>
using namespace std;

int N, A[1005], B[1005];

int main() {
    while(scanf("%d",&N) && N) {
        for(int i=0;i<N;i++) {
            scanf("%d",&A[i]);
            B[i] = A[i];
        }

        sort(B,B+N);

        int I=0, J=N-1;

        while(I < N && A[I] == B[I]) I++;
        while(J >= 0 && A[J] == B[J]) J--;

        if(I > J) {
            printf("0 0\n");
            continue;
        }

        reverse(B+I,B+J+1);

        bool possible = true;

        for(int i=0;i<N;i++)
            if(A[i] != B[i]) possible = false;

        if(possible) printf("%d %d\n",I+1,J+1);
        else printf("0 0\n");


    }
    return 0;
}
