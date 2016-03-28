#include <stdio.h>

int C,W,H,T;

void triangle(int height) {
    for(int i=0;i<height;i++) {
        for(int j=0;j<height-i-1;j++)
            printf(" ");
        for(int j=0;j<i*2+1;j++)
            printf("*");
        printf("\n");
    }
}


void parallelogram(int height,int width){
    for(int i=0;i<height;i++) {
        for(int j=0;j<height-i-1;j++)
            printf(" ");
        for(int j=0;j<width;j++)
            printf("*");
        printf("\n");
    }
}

void rectangle(int height,int width){
    for(int i=0;i<height;i++) {
        for(int j=0;j<width;j++)
            printf("*");
        printf("\n");
    }
}
int main() {
    while(true) {
        scanf("%d",&C);
        if(C==-1)
            break;
        if(T>0)
            printf("\n");
        if(C==1) {
            scanf("%d",&W);
            triangle(W);
        }
        else if(C==2) {
            scanf("%d %d",&W,&H);
            parallelogram(H,W);
        }
        else if(C==3) {
            scanf("%d %d",&W,&H);
            rectangle(H,W);
        }
        T++;
    }
    return 0;
}
