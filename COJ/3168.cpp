#include <bits/stdc++.h>
using namespace std;

class Couple {
public:
    string a,b;
    double score;

    Couple() {}

    Couple(string _a,string _b,double _s) {
        a=_a,b=_b;
        score=_s;
    }
};

bool operator <(Couple a,Couple b) {
    return a.score < b.score;
}

int N;
string x,y;
double a,b,c;
Couple L[105];

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        cin >> x >> y >> a >> b >> c;
        L[i] = Couple(x,y,(b+c)*(a/2.0));
    }

    sort(L,L+N);

    for(int i=0;i<N;i++) {
        printf("%s %s %.2f\n",L[i].a.c_str(),L[i].b.c_str(),L[i].score);
    }
    return 0;
}
