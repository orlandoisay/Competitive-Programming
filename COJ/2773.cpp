#include <bits/stdc++.h>
using namespace std;

int A, B, C, R[100], MNV = 0, MNN;

int main() {
    scanf("%d %d %d",&A,&B,&C);

    for(int i=1;i<=A;i++)
        for(int j=1;j<=B;j++)
            for(int k=1;k<=C;k++)
                R[i+j+k]++;

    for(int i=1;i<=A+B+C;i++) {
        if(R[i] > MNV) {
            MNN = i;
            MNV = R[i];
        }
    }

    printf("%d\n",MNN);

    return 0;
}
