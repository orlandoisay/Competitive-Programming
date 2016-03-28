#include <bits/stdc++.h>

int lastN;
char W[100001];
int A,B;// a -> ( , b -> )
int tA,tB;
int C;
int R[100000];

int main(){
    scanf("%s",W);

    for(int i=strlen(W)-1;i>=0;i--)
        if(W[i]=='#'){
            lastN=i;
            break;
        }

    for(int i=0;i<strlen(W);i++){
        if(W[i]=='(')
            tA++;
    }

    if(tA==0){
        printf("-1");
        return 0;
    }

    for(int i=0;i<strlen(W);i++){
        if(W[i]=='('){
           A++;
        }
        else if(W[i]==')'){
            A--;
        }
        else {
            if(i!=lastN){
                A--;
                R[C++]=1;
            }
            else {
                int SUM=0;
                for(int j=i+1;j<strlen(W);j++){
                    if(W[j]=='(')
                        SUM++;
                    else
                        SUM--;
                }

                R[C++]=SUM+A;

                if(SUM+A==0){
                    printf("-1");
                    return 0;
                }
                A=-SUM;
            }
        }

        if(A<0){
            printf("-1");
            return 0;
        }
    }

    if(A<0){
        printf("-1");
        return 0;
    }

    for(int i=0;i<C;i++)
        printf("%d\n",R[i]);

    return 0;
}