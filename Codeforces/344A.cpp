#include <bits/stdc++.h>
using namespace std;

int n,r=1;
string last,current;

int main() {
    cin >> n;
    cin >> last;

    for(int i=1;i<n;i++) {
        cin >> current;
        if(current != last) {
            r++;
            last=current;
        }
    }

    cout << r;


    return 0;
}