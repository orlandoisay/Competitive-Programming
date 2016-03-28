#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int K;
    string C;

    void set(int pK,string pC){
        K=pK;
        C=pC;
    }
}LETTER;

int IN[10];
string S,F="";
LETTER L[26];

void init(){
    L[0]={2,"2"};
    L[1]={2,"22"};
    L[2]={2,"222"};
    L[3]={3,"3"};
    L[4]={3,"33"};
    L[5]={3,"333"};
    L[6]={4,"4"};
    L[7]={4,"44"};
    L[8]={4,"444"};
    L[9]={5,"5"};
    L[10]={5,"55"};
    L[11]={5,"555"};
    L[12]={6,"6"};
    L[13]={6,"66"};
    L[14]={6,"666"};
    L[15]={7,"7"};
    L[16]={7,"77"};
    L[17]={7,"777"};
    L[18]={7,"7777"};
    L[19]={8,"8"};
    L[20]={8,"88"};
    L[21]={8,"888"};
    L[22]={9,"9"};
    L[23]={9,"99"};
    L[24]={9,"999"};
    L[25]={9,"9999"};
}

int main(){
    for(int i=1;i<=9;i++){
        int TMP;
        cin >>TMP;
        IN[TMP]=i;
    }
    cin >> S;

    init();

    F+=L[S[0]-'a'].C;

    for(int i=1;i<S.size();i++){
        if(L[S[i]-'a'].K == L[S[i-1]-'a'].K)
            F+="#";
        F+=L[S[i]-'a'].C;
    }

    for(int i=0;i<F.size();i++){
        if(F[i]>='0' && F[i]<='9'){
            F[i]=(IN[F[i]-'0']+'0');
        }
    }

    cout << F << "\n";

    return 0;
}
