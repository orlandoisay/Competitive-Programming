#include <stdio.h>

double h,w;

int main() {
    while(scanf("%lfx%lf",&h,&w)!=EOF) {
        double r = (1024*w)/h;

        if(r == 768.0)
            printf("Fill the screen.\n");
        else if(r > 768.0)
            printf("Horizontally.\n");
        else
            printf("Vertically.\n");
    }
    return 0;
}
