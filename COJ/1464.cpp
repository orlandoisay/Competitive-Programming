#include <bits/stdc++.h>
using namespace std;

int N;
stack <char> s;
char str[10005];
string r;

int main() {
    scanf("%d",&N);

    while(N--) {
        r = "";
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++) {
            if(s.empty()) {
                s.push(str[i]);
            }
            else {
                if(s.top() == str[i])
                    s.pop();
                else
                    s.push(str[i]);
            }
        }
        while(!s.empty()) {
            r += s.top();
            s.pop();
        }
        reverse(r.begin(),r.end());
        printf("%s\n",r.c_str());
    }


    return 0;
}
