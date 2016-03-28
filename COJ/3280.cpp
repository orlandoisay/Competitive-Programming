#include <bits/stdc++.h>
using namespace std;

int N,L;
vector <int> R;
vector <int>::iterator it;

int main() {
    for(int i=1;i<=14142;i++)
        R.push_back((i*(i+1))/2);
    while(true) {
        scanf("%d",&N);
        if(!N)
            break;
        it = upper_bound(R.begin(),R.end(),N);
        printf("%d %d\n",(*it)-N,it-R.begin()+1);
    }
    return 0;
}
