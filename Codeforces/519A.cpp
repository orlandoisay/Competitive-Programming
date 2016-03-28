#include <stdio.h>

int balance;
char x[]={'Q','R','B','N','P','K','q','r','b','n','p','k'};
int  v[]={9,5,3,3,1,0,-9,-5,-3,-3,-1,0};
char line[10];

int main() {
    for(int i=0;i<8;i++) {
        scanf("%s",line);
        for(int j=0;j<8;j++) {
            char c = line[j];

            for(int k=0;k<12;k++) {
                if(c == x[k])
                    balance += v[k];
            }
        }
    }

    if(balance > 0)
        printf("White");
    if(balance < 0)
        printf("Black");
    if(!balance)
        printf("Draw");


    return 0;
}