#include <bits/stdc++.h>
using namespace std;

int n, k, r, x;

int main() {
	while(scanf("%d", &n) && n) {
		r = 0;
		
		for(int i = 0; i < n; i++) {
			scanf("%d", &x);
			r += x ? 1 : -1;
		}
		
		printf("Case %d: %d\n", ++k, r);
	}

	return 0;
}
