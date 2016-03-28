#include <bits/stdc++.h>
using namespace std;

int N;
int A[100000];
int Rz[100000];
int M[2][100000],S[2][100000];
int Ms,Ss;

int main(){
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&A[i]);

    sort(A,A+N);


    int Zx=1;
    Rz[Zx]=A[0];
    for(int i=0;i<N;i++){
        if(Rz[Zx]==A[i]){
            Rz[Zx]=A[i];
        }
        else {
            Zx++;
            Rz[Zx]=A[i];
        }
    }

    int X=A[0];
    M[1][0]=1;

    for(int i=0;i<N;i++){
        if(X==A[i]){
            M[0][Ms]++;
        }
        else {
            Ms++;
            M[1][Ms]=Ms+1;
            M[0][Ms]=M[0][Ms-1]+1;
            X=A[i];
        }
    }

    Ms++;

    X=A[N-1];
    S[1][0]=Ms;

    for(int i=N-1;i>=0;i--){
        if(X==A[i]){
            S[0][Ss]++;
        }
        else {
            Ss++;
            Ms--;
            S[1][Ss]=Ms;
            S[0][Ss]=S[0][Ss-1]+1;
            X=A[i];
        }
    }

    int O=0,P=0;

    while(O < Ss && P < Ss){
        if(S[1][P]-M[1][O]+1<3){
            printf("Slavko\n%d %d\n",Rz[M[1][O]],Rz[S[1][P]]);
            return 0;
        }

        if(M[0][O]==S[0][P]){
            if(S[1][P]-M[1][O+1]+1<3){
                printf("Mirko\n%d %d\n",Rz[M[1][O+1]],Rz[S[1][P]]);
                return 0;
            }
            O++;
            P++;
        }
        else if(M[0][O]<S[0][P]){
            S[0][P]-=M[0][O];
            O++;
            if(S[1][P]-M[1][O]+1<3){
                printf("Mirko\n%d %d\n",Rz[M[1][O]],Rz[S[1][P]]);
                return 0;
            }
        }
        else {
            M[0][O]-=S[0][P];
            P++;
            if(S[1][P]-M[1][O]+1<3){
                printf("Slavko\n%d %d\n",Rz[M[1][O]],Rz[S[1][P]]);
                return 0;
            }
        }
    }

    printf("Slavko\n%d %d\n",Rz[1],Rz[1]);
    return 0;
}
