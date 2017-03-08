#include <bits/stdc++.h>
using namespace std;

int N, S, R, Ri, V[25];

int main() {
	while(scanf("%d", &S) != EOF) {
		scanf("%d", &N);
		
		for(int i = 0; i < N; i++)
			scanf("%d", &V[i]);
			
		R = Ri = 0;
			
		for(int k = 0; k < (1 << N); k++) {
			int NS = 0;
			
			for(int i = 0; i < N; i++) 
				if(k & (1 << i)) NS += V[i];
				
			if(NS <= S && NS > R) {
				R = NS;
				Ri = k;
			}			
		}
		
		for(int i = 0; i < N; i++) 
			if(Ri & (1 << i) ) printf("%d ", V[i]);
		
		printf("sum:%d\n", R);	
	}

	return 0;
}
