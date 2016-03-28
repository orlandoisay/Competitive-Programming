#include <bits/stdc++.h>
using namespace std;

int N,R;
string num,op;
stack <int> pila;
char buffer[20];

int parse(string &x) {
    int r=0;

    for(int i=0;i<x.size();i++) {
        if(x[i] == '.') r += 1;
        if(x[i] == ':') r += 2;
        if(x[i] == '-') r += 5;
        if(x[i] == '=') r += 10;
    }
    return r;
}

int main() {
    scanf("%d %s",&N,buffer);

    num = buffer;

    pila.push(parse(num));

    for(int i=0;i<N;i++) {
        scanf("%s",buffer);
        op = buffer;
        scanf("%s",buffer);
        num = buffer;

        if(op == "+") {
            pila.push(parse(num));
        }
        else {
            int x = pila.top() * parse(num);
            pila.pop();
            pila.push(x);
        }
    }
    while(!pila.empty()) {
        R += pila.top();
        pila.pop();
    }

    printf("%d\n",R);

    return 0;
}
