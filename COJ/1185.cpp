#include <bits/stdc++.h>
using namespace std;

int N;
vector <int> d;

int main() {
    scanf("%d",&N);

    if(!N) {
        printf("10\n");
        return 0;
    }
    if(N==1) {
        printf("1\n");
        return 0;
    }

    for(int i=9;i>1;i--) {
        while(N%i==0) {
            d.push_back(i);
            N/=i;
        }
    }
    if(N>1) {
        printf("-1\n");
        return 0;
    }


    sort(d.begin(),d.end());

    for(int i=0;i<d.size();i++)
        printf("%d",d[i]);
    printf("\n");



    return 0;
}
