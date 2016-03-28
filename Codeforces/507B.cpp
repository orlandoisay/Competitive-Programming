#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double R,X,Y,X2,Y2;
double RES;
double RESF;

int main(){
    scanf("%lf %lf %lf %lf %lf",&R,&X,&Y,&X2,&Y2);

    RES=ceil(sqrt( (abs(X2-X)*abs(X2-X)) + (abs(Y2-Y)*abs(Y2-Y)) ));

    RESF=ceil(RES/(R*2));

    //if(RESF*R*2!=RES)RESF++;
    printf("%0.0lf",RESF);

    return 0;
}