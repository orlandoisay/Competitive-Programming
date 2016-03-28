#include <stdio.h>

int A,B,C,D,P;
bool X,Y;

int main(){
    scanf("%d %d %d %d",&A,&B,&C,&D);
    for(int i=0;i<3;i++)
    {
        scanf("%d",&P);
        P--;
        X=false;
        Y=false;
        if(P%(A+B)<A){
            X=true;
        }
        if(P%(C+D)<C){
            Y=true;
        }
        if(X&&Y){
            printf("both");
        }
        else if(X || Y){
            printf("one");
        }
        else
            printf("none");
        printf("\n");
    }

    return 0;
}

