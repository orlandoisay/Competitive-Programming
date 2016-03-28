#include <stdio.h>

int N,K;
int A,R;

int main(){
    scanf("%d %d",&N,&K);

    for(int i=0;i<N;i++){
        int TMP;
        scanf("%d",&TMP);
        if(i==K-1)
            A=TMP;
        if(TMP>0 && TMP>=A)
            R++;
    }

    printf("%d",R);
    return 0;
}