#include <bits/stdc++.h>
using namespace std;

int N,balance,x,y;
string a,b;

// Rock - 0
// Paper - 1
// Scissors - 2

int id(string s) {
    if(s[0] == 'r')
        return 0;
    if(s[0] == 'p')
        return 1;
    return 2;
}

int battle(int a,int b) {
    if(a == b)
        return 0;

    if(a - 1 == b || a + 2 == b)
        return 1;
    return -1;
}

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        cin >> a >> b;
        balance += battle(id(a),id(b));


    }

    if(balance>0)
        printf("A win\n");
    if(balance<0)
        printf("B win\n");
    if(!balance)
        printf("tied\n");


    return 0;
}
