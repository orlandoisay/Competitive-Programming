#include <bits/stdc++.h>
using namespace std;

int n, v[3];

int main() {
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
	
		for(int j = 0; j < 3; j++) 
			scanf("%d", &v[j]);
			
		sort(v,v+3);
		
		printf("Case %d: %d\n", i + 1, v[1]);
			
	}

	return 0;
}
