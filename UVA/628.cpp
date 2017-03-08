#include <bits/stdc++.h>
using namespace std;

int N, M, L;
char W[105][260];
char R[260];

int I[260];

void genPass(int p) {
	if(p == L) {
		for(int i=0;i<L;i++) {
			if(R[i] == '#') printf("%s", W[I[i]]);
			else			printf("%d", I[i]);
		}
		printf("\n");
		return;
	}
	
	if(R[p] == '#') {
		for(int i=0;i<N;i++) {
			I[p] = i;
			genPass(p+1);
		}
	}
	else {
		for(int i=0;i<10;i++) {
			I[p] = i;
			genPass(p+1);
		}
	}
}

int main() {
	
	while(scanf("%d", &N) != EOF) {
		printf("--\n");

		for(int i=0;i<N;i++)
			scanf("%s", W[i]);
		
		scanf("%d", &M);
		
		for(int i=0;i<M;i++) {
			scanf("%s", R);
			L = strlen(R);
			genPass(0);
		}
	}

	return 0;
}
