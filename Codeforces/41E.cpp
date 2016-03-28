#include <stdio.h>

int N,R;

int main(){
    scanf("%d",&N);

    if(N%2==0)
        R=(N/2)*(N/2);
    else
        R=(N/2)*(N/2+1);

    printf("%d\n",R);
    if(R){
        for(int i=1;i<=(N/2);i++){
            for(int j=(N/2)+1;j<=N;j++){
                printf("%d %d\n",i,j);
            }
        }
    }



    return 0;
}