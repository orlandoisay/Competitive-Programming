#include <bits/stdc++.h>
using namespace std;

int T,a,b;
string S;
char buffer[500];

int main() {
    scanf("%d",&T);
    fgets(buffer,500,stdin);

    while(T--) {
        fgets(buffer,500,stdin);
        S = buffer;

        int a=0,b=0;
        for(int i=0;i<S.size()-1;i++)
            if(S[i]%2 == 0)
                a++;
            else
                b++;

        if(a > b)
            cout << "Even\n";
        else
            cout << "Odd\n";
    }
    return 0;
}
