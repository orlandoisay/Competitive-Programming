#include <stdio.h>

int N;
double V;

int main() {
    scanf("%lf %d",&V,&N);

    if(N==1)
        printf("%.1f\n",V);
    else if(N==2)
        printf("%.2f\n",V);
    else if(N==3)
        printf("%.3f\n",V);
    else if(N==4)
        printf("%.4f\n",V);
    else if(N==5)
        printf("%.5f\n",V);
    else
        printf("%.6f\n",V);
    return 0;
}
