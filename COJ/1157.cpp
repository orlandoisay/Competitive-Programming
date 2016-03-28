#include <bits/stdc++.h>
using namespace std;

double factorial(int x){
    if(x==0)
        return 1;
    double ret=1;
    for(int i=2;i<=x;i++)
        ret*=(double)i;
    return ret;
}

double e(int val) {
    double ret=0;
    for(int i=0;i<=val;i++){
        ret+=(1.0/factorial(i));
    }
    return ret;
}

int main() {
    printf("n e\n");
	printf("- -----------\n");
    for(int i=0;i<10;i++) {
        printf("%d ",i);

        double r=e(i);
        if(i==0)
            printf("1\n");
        else if(i==1)
            printf("2\n");
        else if(i==2)
            printf("2.5\n");
        else
            printf("%0.9f\n",r);
    }

    return 0;
}
