#include <bits/stdc++.h>

FILE * IN;
FILE * OUT;

int N,T;

int main(){
    IN = fopen("input.txt","r");
    OUT = fopen("output.txt","w");

    fscanf(IN,"%d",&T);

    for(int i=0;i<T;i++){
        fscanf(IN,"%d",&N);
        if(N%2==0){
            fprintf(OUT,"1\n",T);
        }
        else {
            fprintf(OUT,"0\n",T);
        }
    }



    return 0;
}