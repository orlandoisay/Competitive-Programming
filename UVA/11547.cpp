#include <bits/stdc++.h>
using namespace std;

int t, n;

int main() {
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d", &n);
		
		int r = 5 * ((63 * n) + 7492) - 498;
		
		r = (abs(r) / 10) % 10;
		
		printf("%d\n", r);
	}
	return 0;
}
