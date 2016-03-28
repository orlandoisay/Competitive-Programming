#include <bits/stdc++.h>
using namespace std;

class Card {
public:
    string val;

    Card() {}

    Card(string _val) {
        val =_val;
    }

    int face() {
        if(val[0] == 'A')
            return 1;
        if(val[0] == 'T')
            return 10;
        if(val[0] == 'J')
            return 11;
        if(val[0] == 'Q')
            return 12;
        if(val[0] == 'K')
            return 13;
        return val[0] - '0';
    }

    int suit() {
        if(val[1] == 'S')
            return 0;
        if(val[1] == 'H')
            return 1;
        if(val[1] == 'C')
            return 2;
        if(val[1] == 'D')
            return 3;
    }

};

bool operator <(Card a,Card b) {
    if(a.face() == b.face())
        return a.suit() < b.suit();
    return a.face() < b.face();
}

int T,N;
Card L[52];
string str;

int main() {
    cin >> T;

    while(T--) {
        cin >> N;

        for(int i=0;i<N;i++) {
            cin >> str;
            L[i] = Card(str);
        }

        sort(L,L+N);

        for(int i=0;i<N;i++) {
            cout << L[i].val;
            if(i<N-1)
                cout << " ";
            else
                cout << "\n";
        }
    }
    return 0;
}
