#include <stdio.h>
#include <algorithm>

using namespace std;

int N;
int mnx,mxx,mny,mxy;
int A,B,R;

int main(){
    scanf("%d",&N);

    scanf("%d %d",&mnx,&mny);
    mxx=mnx;
    mxy=mny;

    for(int i=0;i<N-1;i++){
        scanf("%d %d",&A,&B);
        mnx=min(mnx,A);
        mxx=max(mxx,A);
        mny=min(mny,B);
        mxy=max(mxy,B);
    }
    R=max(mxx-mnx,mxy-mny);
    printf("%d\n",R*R);
    return 0;
}
