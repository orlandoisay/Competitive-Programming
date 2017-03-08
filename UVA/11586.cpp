#include <bits/stdc++.h>
using namespace std;

int T, L, MX, FX, XM, XF;
char BF[250];

int main() {
	fgets(BF, 250, stdin);
	sscanf(BF, "%d", &T);
	
	while(T--) {
		fgets(BF, 250, stdin);

		L = strlen(BF) - 1;
		
		MX = FX = XM = XF = 0;
		
		int i = 0;
		
		while(i < L) {
			if(BF[i] == ' ') i++;
			else {
				if(BF[i] == 'M') MX++;
				else FX++;
				if(BF[i+1] == 'M') XM++;
				else XF++;
				i+=2;
			}
		}
		
		printf("%s\n", (MX == XF && FX == XM && MX + FX > 1) ? "LOOP" : "NO LOOP");
	}
	return 0;
}
