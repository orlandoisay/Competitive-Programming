#include <bits/stdc++.h>
#define pi 3.141592653589793
using namespace std;

double r,R;

int main() {
    while(scanf("%lf %lf",&r,&R)!=EOF) {
        if(r>R) swap(r,R);
        printf("%.4f %.2f\n",((R-r)*r/(R+r))+r,asin((R-r)/(R+r))*360/pi);
    }
    return 0;
}
