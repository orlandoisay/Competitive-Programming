#include <bits/stdc++.h>
using namespace std;

int N, L, K, I, J;
int DP[1000005];
char S[1000005];

int main() {
	while(scanf("%s", S) != EOF) {
		L = strlen(S);
		
		for(int i=0;i<L;i++) 
			DP[i] = (S[i] == '1' ? 1 : 0) + (i ? DP[i-1] : 0);
			
		printf("Case %d:\n", ++K);
		
		scanf("%d", &N);
		
		while(N--) {
			scanf("%d %d", &I, &J);
			if(J < I) swap(I, J);
			
			int len = J - I + 1;
			int sum = DP[J] - (I ? DP[I-1] : 0);
			
			printf("%s\n", (!sum || sum == len) ? "Yes" : "No");			
		}
	}
	return 0;
}
