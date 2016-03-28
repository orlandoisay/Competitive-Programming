#include <bits/stdc++.h>

char N[3];
int A[10]={2,7,2,3,3,4,2,5,1,2};

int main(){
    scanf("%s",&N);
    printf("%d",A[N[0]-'0']*A[N[1]-'0']);
    return 0;
}