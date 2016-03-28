#include <bits/stdc++.h>
using namespace std;

int t,g,d,m,y,c,C,R;

int dig(int x) {
    int r=0;
    while(x) {
        r++;
        x/=10;
    }
    return r;
}

string s() {
    string r="";
    char buff[10];
    sprintf(buff,"%d",g);
    r+=buff;

    r+="-";

    for(int i=0;i<4-dig(y);i++)
        r+="0";
    sprintf(buff,"%d",y);
    r+=buff;

    r+="-";

    for(int i=0;i<2-dig(m);i++)
        r+="0";
    sprintf(buff,"%d",m);
    r+=buff;

    r+="-";

    for(int i=0;i<2-dig(d);i++)
        r+="0";
    sprintf(buff,"%d",d);
    r+=buff;

    r+="-";

    for(int i=0;i<4-dig(c);i++)
        r+="0";
    sprintf(buff,"%d",c);
    r+=buff;

    r+="-";

    for(int i=0;i<3-dig(C);i++)
        r+="0";
    sprintf(buff,"%d",C);
    r+=buff;

    r+="-";

    for(int i=0;i<4-dig(R);i++)
        r+="0";
    sprintf(buff,"%d",R);
    r+=buff;
    return r;
}

int main() {
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d/%d/%d %d %d %d",&g,&d,&m,&y,&c,&C,&R);
        printf("%s\n",s().c_str());
    }

    return 0;
}
