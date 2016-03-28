#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int N,M;

int main(){
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++){
        if(i%2==0){
            for(int j=0;j<M;j++)

                printf("#");
            printf("\n");
        }
        else {
            if(i%4==3){
                printf("#");
                for(int j=0;j<M-1;j++)
                    printf(".");
            }
            else {
                for(int j=0;j<M-1;j++)
                    printf(".");
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}