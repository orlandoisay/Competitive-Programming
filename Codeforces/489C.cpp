#include <bits/stdc++.h>
using namespace std;

int M,S,SR;
int A[100];

int Mx[100];
int Mn[100];

void fx(int pos,int sr){
    if(pos==M){
        memcpy(Mx,A,sizeof(A));
        memcpy(Mn,A,sizeof(A));

        if(Mn[M-1]==0){
            Mn[M-1]=1;
            Mn[M-2]--;
            int atsa=M-2;

            while(Mn[atsa]==-1){
                Mn[atsa]=0;
                Mn[atsa-1]--;
                atsa--;
            }
        }
        return;
    }

    A[pos]=min(sr,9);
    fx(pos+1,sr-A[pos]);
}

int main(){
    scanf("%d %d",&M,&S);
    if(M==1 && S==0){
        printf("0 0\n");
        return 0;
    }
    if(M>1 && S==0){
        printf("-1 -1\n");
        return 0;
    }
    if(M*9<S){
        printf("-1 -1\n");
        return 0;
    }

    fx(0,S);

    for(int i=M-1;i>=0;i--)
        printf("%d",Mn[i]);

    printf(" ");

    for(int i=0;i<M;i++)
        printf("%d",Mx[i]);
    return 0;
}