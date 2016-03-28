#include <bits/stdc++.h>
using namespace std;

int n,it=1;
string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main() {
    cin >> n;

    while(n) {
        for(int i=0;i<5;i++) {
            if(n-it<=0) {
                cout << name[i];
                return 0;
            }
            else {
                n-=it;
            }
        }
        it *=2;
    }

    return 0;
}