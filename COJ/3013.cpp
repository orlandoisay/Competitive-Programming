#include <stdio.h>

int T,N;

int pow(int a,int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(b%2==0){
        return pow(a,b/2)*pow(a,b/2);
    }
    else {
        return a*pow(a,b-1);
    }

}

int main(){
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        printf("%d\n",pow(2,N)-1);
    }
    return 0;
}
