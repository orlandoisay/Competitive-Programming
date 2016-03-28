#include <bits/stdc++.h>
#define ll long long
using namespace std;

char str[2500];
ll len,res, ant[2500],dsp[2500],antA[2500],dspA[2500];

ll pares(ll l, ll r) {
    if(l>0)
        return dspA[len-1] - dspA[r] + antA[l-1];
    return dspA[len-1] - dspA[r];
}

int main() {
    scanf("%s",str);

    len = strlen(str);

    //Genera palindromos impares
    for(int i=0;i<len;i++) {
        int l=i,r=i;

        while(l>=0 && r<len && str[l]==str[r]) {
            ant[r]++;
            dsp[l]++;

            l--;
            r++;
        }
    }
    //Genera palindromos pares
    for(int i=0;i<len-1;i++) {
        int l=i,r=i+1;

        while(l>=0 && r<len && str[l]==str[r]) {
            ant[r]++;
            dsp[l]++;

            l--;
            r++;
        }
    }
    antA[0]=ant[0];
    dspA[0]=dsp[0];

    for(int i=0;i<len;i++)
        antA[i]=ant[i]+antA[i-1];
    for(int i=0;i<len;i++)
        dspA[i]=dsp[i]+dspA[i-1];

    //Suma impares
    for(int i=0;i<len;i++) {
        int l=i,r=i;

        while(l>=0 && r<len && str[l]==str[r]) {
            res += pares(l,r);

            l--;
            r++;
        }
    }

    //Suma pares
    for(int i=0;i<len-1;i++) {
        int l=i,r=i+1;

        while(l>=0 && r<len && str[l]==str[r]) {
            res += pares(l,r);

            l--;
            r++;
        }
    }

    printf("%lld\n",(res)/2);

//    for(int i=0;i<len;i++)
//        printf("%d\t%d\n",antA[i],dspA[i]);



    return 0;
}
