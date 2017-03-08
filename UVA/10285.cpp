#include <bits/stdc++.h>
using namespace std;

int N, RES, R, C, V[105][105], DP[105][105];
char NAME[105];

bool inside(int i, int j) {
	return 0 <= i && i < R && 0 <= j && j < C;
}

int calc(int i, int j) {
	if(DP[i][j] != -1) return DP[i][j];
	
	int di[] = {-1, 1, 0, 0},
		dj[] = {0, 0, -1, 1};
		
	int NR = 0;
	
	for(int k=0;k<4;k++) {
		int ni = i + di[k],
			nj = j + dj[k];
			
		if(inside(ni, nj) && V[i][j] > V[ni][nj]) 
			NR = max(NR, 1 + calc(ni, nj));
	}
	
	return DP[i][j] = NR;
}

int main() {
	scanf("%d", &N);
	
	while(N--) {
		scanf("%s %d %d", NAME, &R, &C);
		
		for(int i=0;i<R;i++) {
			for(int j=0;j<C;j++) {
				scanf("%d", &V[i][j]);
				DP[i][j] = -1;
			}
		}
		
		RES = 1;
		
		for(int i=0;i<R;i++) {
			for(int j=0;j<C;j++) {
				int NR = 1 + calc(i, j);
				RES = max(RES, NR);
			}
		}
		
		printf("%s: %d\n", NAME, RES);
	}


	return 0;
}
