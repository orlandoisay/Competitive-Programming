#include <stdio.h>

int hf,hi,a,b,dif;

int main() {
    scanf("%d:%d",&a,&b);
    hf=60*a+b;
    scanf("%d:%d",&a,&b);
    hi=60*a+b;

    if(hf < hi)
        hf+=24*60;
    dif = hf - hi;
    if(dif / 60 <= 9)
        printf("0");
    printf("%d:",dif/60);
    if(dif%60 <= 9)
        printf("0");
    printf("%d\n",dif%60);
    return 0;
}
