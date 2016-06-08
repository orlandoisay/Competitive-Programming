#include <bits/stdc++.h>
using namespace std;

int N, R[4];
int S, ACT, ANT, LESION, EXE;

int main() {
    scanf("%d",&N);

    while(N-- ) {
        scanf("%d",&S);
        scanf("%d",&LESION);

        EXE = 0;

        ACT = -1;

        for(int i=0;i<S;i++) {
            ANT = ACT;
            scanf("%d", &ACT);


            if(ANT != -1 && double(ACT) > double(ANT * 1.1))
                EXE = 1;
        }

        if(EXE == 1 && LESION == 1)
            R[0]++;
        if(EXE == 0 && LESION == 1)
            R[1]++;
        if(EXE == 1 && LESION == 0)
            R[2]++;
        if(EXE == 0 && LESION == 0)
            R[3]++;

    }

    for(int i=0;i<4;i++)
        printf("%d\n",R[i]);
    return 0;
}
