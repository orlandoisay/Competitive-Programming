#include <bits/stdc++.h>
using namespace std;

double ax1, ay1, ax2, ay2;

int main() {
    while(scanf("%lf %lf %lf %lf",&ax1,&ay1,&ax2,&ay2)!=EOF) {
        printf("%.16f\n",((ax1-ax2)*(ax1-ax2)+(ay1-ay2)*(ay1-ay2))/6);
    }

    return 0;
}
