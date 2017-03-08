#include <bits/stdc++.h>
using namespace std;

int F, R, Fs[15], Rs[15];
vector <double> L;
double MX;

int main() {
	while(true) {
		scanf("%d", &F);
		
		if(!F) break;
		
		scanf("%d", &R);
		
		L.clear();
		
		for(int i = 0; i < F; i++)
			scanf("%d", &Fs[i]);
			
		for(int i = 0; i < R; i++)
			scanf("%d", &Rs[i]);
			
		for(int i = 0; i < R; i++)
			for(int j = 0; j < F; j++)
				L.push_back((double)Rs[i]/(double)Fs[j]);
		
		sort(L.begin(), L.end());
		
		MX = 0.0;
				
		for(int i = 0; i < L.size() - 1; i++) {
			MX = max(MX, L[i+1] / L[i]);
		}
		
		printf("%.2f\n", MX);
	}
	return 0;
}
