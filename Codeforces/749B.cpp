#include <bits/stdc++.h>
#define pii pair < int, int >
#define zero make_pair(0, 0)
using namespace std;

pii l[3];
set < pii > s;

pii sub(pii a, pii b) {
    return make_pair(a.first - b.first, a.second - b.second);
}

pii sum(pii a, pii b) {
    return make_pair(a.first + b.first, a.second + b.second);
}

pii c;

int main() {
    for(int i=0;i<3;i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        l[i] = make_pair(x, y);
    }

    c = sub(l[0], l[1]);

    s.insert(sum(l[2], c));
    s.insert(sub(l[2], c));

    c = sub(l[0], l[2]);

    s.insert(sum(l[1], c));
    s.insert(sub(l[1], c));

    c = sub(l[1], l[2]);

    s.insert(sum(l[0], c));
    s.insert(sub(l[0], c));

    printf("%d\n", (int)s.size());

    for(set< pii >::iterator it = s.begin(); it != s.end(); it++) {
        printf("%d %d\n", it->first, it->second);
    }

    return 0;
}