#include <bits/stdc++.h>
#define ll long long
#define mod 1000007
using namespace std;

class Mat2 {
public:
    int n,m;
    vector < vector<ll> > v;

    Mat2(int _n,int _m) {
        n=_n,m=_m;
        v.resize(n);
        for(int i=0;i<n;i++)
            v[i].resize(m);
    }

    Mat2 operator *(Mat2 b) {
        Mat2 r(n,b.m);
        for(int i=0;i<n;i++) {
            for(int j=0;j<b.m;j++) {
                r.v[i][j]=0;
                for(int k=0;k<m;k++) {
                    r.v[i][j]+=v[i][k]*b.v[k][j];
                    r.v[i][j]%=mod;
                }
            }
        }
        return r;
    }

    void p() {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                printf("%lld\t",v[i][j]);
            }
            printf("\n");
        }
    }
};

Mat2 pot(Mat2 b,ll x) {
    if(x==1)
        return b;
    if(x % 2)
        return b * pot(b,x-1);
    return pot(b*b,x/2);
}

ll t,n;
Mat2 m(2,2),f(2,1);

int main() {
    scanf("%lld",&t);

    while(t--) {
        scanf("%lld",&n);
        n++;
        m.v = {{0,1},{1,1}};
        f.v = {{0},{1}};
        m = pot(m,n);
        f = m * f;
        printf("%lld\n",f.v[1][0]);
    }


    return 0;
}

