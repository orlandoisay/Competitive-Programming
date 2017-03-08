#include <bits/stdc++.h>
#define Pos pair<int,int>
#define fs first
#define sn second
#define INF 1 << 30
using namespace std;

int dist(Pos A, Pos B) {
	return abs(A.fs - B.fs) + abs(A.sn - B.sn);
}

int T, W, H, A, B, N, I, J;
Pos In, L[10];

int test() {
	int NR = 0;
	NR += dist(In, L[0]);
	
	for(int i = 0; i < N - 1; i++)
		NR += dist(L[i], L[i+1]);
		
	NR += dist(L[N-1], In);
		
	return NR;
}

int main() {
	scanf("%d", &T);
	
	while(T--) {
		scanf("%d %d", &W, &H);
		
		scanf("%d %d", &A, &B);
		In = make_pair(A, B);
		
		scanf("%d", &N);
		
		for(int i = 0; i < N; i++) {
			scanf("%d %d", &I, &J);			
			L[i] = make_pair(I, J);
		}
		
		sort(L, L + N);		
		
		int R = INF;
		
		do {
			R = min(R, test());
		} while(next_permutation(L, L + N));
		
		printf("The shortest path has length %d\n", R);			
	}
	return 0;
}
