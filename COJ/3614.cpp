#include <bits/stdc++.h>
using namespace std;

int T,N;

string num(int X) {
    if(X == 0) return "zero";
    if(X == 1) return "one";
    if(X == 2) return "two";
    if(X == 3) return "three";
    if(X == 4) return "four";
    if(X == 5) return "five";
    if(X == 6) return "six";
    if(X == 7) return "seven";
    if(X == 8) return "eight";
    if(X == 9) return "nine";
    if(X == 10) return "ten";
    if(X == 11) return "eleven";
    if(X == 12) return "twelve";
    if(X == 13) return "thirteen";
    if(X == 14) return "fourteen";
    if(X == 15) return "fifteen";
    if(X == 16) return "sixteen";
    if(X == 17) return "seventeen";
    if(X == 18) return "eighteen";
    if(X == 19) return "nineteen";

    string r;

    if(X / 10 == 2) r = "twenty";
    if(X / 10 == 3) r = "thirty";
    if(X / 10 == 4) r = "forty";
    if(X / 10 == 5) r = "fifty";
    if(X / 10 == 6) r = "sixty";
    if(X / 10 == 7) r = "seventy";
    if(X / 10 == 8) r = "eighty";
    if(X / 10 == 9) r = "ninety";

    if(X % 10)
        r += "-" + num(X%10);

    return r;
}

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        printf("%s\n",num(N).c_str());
    }
    return 0;
}
