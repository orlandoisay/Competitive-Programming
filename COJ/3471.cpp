#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int A,B;
bool P[MAX+5];
vector <int> R;

int main() {
    P[0]=true;
    for(int i=2;i<=MAX;i++)
        if(!P[i])
            for(int j=i+i;j<=MAX;j+=i)
                P[j]=true;

    scanf("%d %d",&A,&B);
    while(A) {
        if(!P[A%B])
            R.push_back(A%B);
        A/=B;
    }
    sort(R.begin(),R.end());

    printf("%d",R.size());
    for(int i=0;i<R.size();i++)
        printf(" %d",R[i]);
    printf("\n");



    return 0;
}
