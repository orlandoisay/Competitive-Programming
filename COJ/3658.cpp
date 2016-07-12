#include <bits/stdc++.h>
using namespace std;

int A[3],B[3];

int main() {
    for(int i=0;i<3;i++)
        scanf("%d",&A[i]);
    for(int i=0;i<3;i++)
        scanf("%d",&B[i]);
    sort(A,A+3);
    sort(B,B+3);

    if(A[0]==B[0]&&A[1]==B[1]&&(A[0]*A[0]+A[1]*A[1] == A[2]*A[2]))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
