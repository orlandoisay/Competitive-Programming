#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N,K,UNOS,RES,A;
ll AMX,BMX,CMX;
bool U[150];
string BIN;

//string split(string x) {
//    string f = "";
//
//    for(int i=0;i<x.size();i++) {
//        f += x[i];
//        if(i%3==2)
//            f += " ";
//    }
//    reverse(f.begin(),f.end());
//
//    return f;
//}

ll p(ll B, ll X) {
    if(!X)
        return 1;
    return B * p(B,X-1);
}

string toBin(ll X) {
    string s = "";

    while(X) {
        s += (char)((X%2) + '0');
        X>>=1;
    }

    return s;
}

ll toDec(string S) {
    ll X = 0;

    for(ll i = 0, p2 = 1;i<S.size();i++) {
        if(S[i]=='1')
            X+=p(2,i);
    }
    return X;
}

ll intenta(ll pA,ll pB,ll pC) {
    string nv = "";

    for(ll i=BIN.size()-1;i>=0;i--) {
        if(!U[i])
            nv += BIN[i];
        else {
            if(i%3==0) { // Caso C
                if(pC) {
                    nv += "1";
                    pC--;
                }
                else
                    nv += "0";
            }
            if(i%3==1) {
                if(pB) {
                    nv += "1";
                    pB--;
                }
                else
                    nv += "0";
            }
            if(i%3==2) {
                if(pA) {
                    nv += "1";
                    pA--;
                }
                else
                    nv += "0";
            }
        }
    }
    reverse(nv.begin(),nv.end());
    return toDec(nv);
}

ll resuelve() {
    ll SOL = 0;
    for(ll a = 0; a <= 21 && a <= AMX; a++) {
        for(ll b = 0; b <= 21 && b<= BMX; b++) {
            for(ll c = 0; c <= 21 && c<= CMX; c++) {
                if((4*a+2*b+c+RES)%7 == 0 && a+b+c == UNOS) {
                    SOL = max(SOL,intenta(a,b,c));
                }
            }
        }
    }

    return SOL;
}

int main() {

    while(scanf("%lld",&N)!=EOF) {
        RES = UNOS = 0;
        AMX = BMX = CMX = 0;
        BIN = toBin(N);
        scanf("%lld",&K);

        memset(U,0,sizeof(U));

        for(int i=0;i<K;i++) {
            scanf("%lld",&A);
            U[A] = true;
        }

        for(ll i=0;i<BIN.size();i++) {
            if(BIN[i] == '1') {
                if(U[i]) UNOS++;
                else RES += p(2,i%3);
            }
            if(U[i]) {
                if(i%3==0) CMX++;
                if(i%3==1) BMX++;
                if(i%3==2) AMX++;
            }
        }
        printf("%lld\n",resuelve());
    }

    return 0;
}
