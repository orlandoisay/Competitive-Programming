#include <bits/stdc++.h>
using namespace std;

int a[6];
double r;

int main() {
    while(true) {
        r = 0;
        for(int i=0;i<6;i++)
            scanf("%d",&a[i]);

        bool cont = false;
        for(int i=0;i<6;i++) if(a[i]) cont = true;
        if(!cont) break;

        sort(a,a+6);

        for(int i=1;i<5;i++)
            r += a[i];

        r /= 4.0;

        //printf("%f\n",r);
        cout << r << "\n";


    }
    return 0;
}
