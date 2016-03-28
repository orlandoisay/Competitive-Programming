#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll R,C,K;
ll M[100][100];
ll D[100][100]={0};

void c(int x,int y) {
    for(int i=x+1;i<R;i++) {
        for(int j=y+1;j<C;j++) {
            if(M[x][y]!=M[i][j]) {
                D[x][y]+=D[i][j];
                D[x][y]%=mod;
            }
        }
    }
}

int main(){
    cin >> R >> C >> K;

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin >> M[i][j];

    D[R-1][C-1]=1;
    for(int i=R-2;i>=0;i--){
        for(int j=C-2;j>=0;j--){
            c(i,j);
        }
    }

    cout << D[0][0];

    return 0;
}
