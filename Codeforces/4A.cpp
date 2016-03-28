#include <stdio.h>

int main(){
    int A;
    scanf("%d",&A);
    if(A%2==0 && A>2){
        printf("YES");
    }
    else {
        printf("NO");
    }    
    return 0;
}