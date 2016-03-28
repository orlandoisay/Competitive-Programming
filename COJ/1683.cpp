#include <stdio.h>
#define LIM 500
using namespace std;

int C,N,R;
int A[LIM+1];

int main() {
    scanf("%d",&C);

    for(int i=1;i<=(LIM/2);i++)
        for(int j=(i*2);j<=LIM;j+=i)
            A[j]+=i;

    for(int i=0;i<C;i++) {
        scanf("%d",&N);
        R=A[N];
        if(R<N)
            printf("Deficient\n");
        else if(R==N)
            printf("Perfect\n");
        else
            printf("Abundant\n");
    }

    return 0;
}
