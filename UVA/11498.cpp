#include <bits/stdc++.h>
using namespace std;

int n, a, b, x, y;

int main() {
	while(scanf("%d", &n) && n) {	
		scanf("%d %d", &a, &b);
	
		for(int i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			x -= a, y -= b;
		
			if(!x || !y) {
				printf("divisa\n");
				continue;
			}
		
			printf("%s", y > 0 ? "N" : "S");
			printf("%s\n", x > 0 ? "E" : "O");
		}
		
	}
	return 0;
}
