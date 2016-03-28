#include <bits/stdc++.h>
#define ll long long
#define mod 10
using namespace std;

class Vec {
public:
    ll vals[2][1];

    Vec() {
        vals[0][0]=0;
        vals[1][0]=1;
    }

    void print() {
        printf("|%lld|\n|%lld|\n",vals[0][0],vals[1][0]);
    }
};

class Mat {
public:
    ll vals[2][2];

    Mat() {
        vals[0][0]=0;
        vals[0][1]=vals[1][0]=vals[1][1]=1;
    }

    Mat operator*(Mat b) {
        Mat ret;
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                ret.vals[i][j] = 0;
                for(int k=0;k<2;k++) {
                    ret.vals[i][j] += (vals[i][k] * b.vals[k][j]) % mod;
                    ret.vals[i][j] %= mod;
                }
            }
        }
        return ret;
    }

    Vec operator*(Vec b) {
        Vec ret;
        for(int i=0;i<2;i++) {
            for(int j=0;j<1;j++) {
                ret.vals[i][j] = 0;
                for(int k=0;k<2;k++) {
                    ret.vals[i][j] += (vals[i][k] * b.vals[k][j]) % mod;
                    ret.vals[i][j] %= mod;
                }
            }
        }
        return ret;
    }
};

Mat pow(Mat b,ll n) {
    if(n == 1)
        return b;
    if(n % 2)
        return b * pow(b,n-1);
    Mat ret = pow(b,n/2);
    return ret * ret;
}

ll fibonacci(ll x) {
    if(x<2)
        return x;
    Mat T;
    Vec F;
    T = pow(T,x);
    F = T * F;
    return F.vals[0][0];
}


ll n;

int main() {


    while(scanf("%lld",&n)!=EOF) {
        printf("%lld\n",fibonacci(n));
    }
    return 0;
}
