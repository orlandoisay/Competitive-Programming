#include <bits/stdc++.h>
using namespace std;

char str[100005];
list <char> n_str;
list <char>::iterator it;
int len;

int main() {
    while(scanf("%s", str) != EOF) {
        int len = strlen(str);

        n_str.clear();
        it = n_str.begin();

        for(int i=0;i<len;i++) {
            char c = str[i];
            if(c == '[') {
                it = n_str.begin();
            } else if(c == ']') {
                it = n_str.end();
            } else {
                n_str.insert(it, c);
            }
        }

        while(!n_str.empty()) {
            printf("%c", n_str.front());
            n_str.pop_front();
        }
        printf("\n");
    }
    return 0;
}
