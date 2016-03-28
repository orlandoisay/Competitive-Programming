#include <bits/stdc++.h>
#define ll long long int
using namespace std;


bool R = false;
string USR, COD = "CODEFORCES";

int main() {
    cin >> USR;

    if(USR.size()<10){
        cout << "NO";
        return 0;
    }

    for(int i=0;i<=10;i++){
        if(COD.substr(0,i)==USR.substr(0,i) && COD.substr(i,10-i)==USR.substr(USR.size()-10+i,10-i)) {
            R=true;
            break;
        }

    }

    if(R)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}