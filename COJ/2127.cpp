#include <bits/stdc++.h>
using namespace std;

string line;

int main() {
    while(getline(cin,line)) {
        for(int i=0;i<line.size();i++)
            line[i]=tolower(line[i]);
        int ans = line.find("problem");
        if(ans >=0 && ans < line.size())
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
