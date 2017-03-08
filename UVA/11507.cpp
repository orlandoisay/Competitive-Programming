#include <bits/stdc++.h>
using namespace std;

int transform(int cur, char s[]) {
	int t = (s[0] == '+' ? 2 : 0) + (s[1] == 'z' ? 1 : 0);
	// -y, -z, +y, +z, 

	int mat[6][4] = {
		{4, 5, 1, 2}, // -x 0
		{0, 1, 3, 1}, // -y 1
		{2, 0, 2, 3}, // -z 2
		{1, 2, 4, 5}, // +x 3
		{3, 4, 0, 4}, // +y 4 
		{5, 3, 5, 0}  // +z 5
	};
	
	return mat[cur][t];
}

void print(int cur) {
	switch(cur) {
		case 0: printf("-x\n"); break;
		case 1: printf("-y\n"); break;
		case 2: printf("-z\n"); break;
		case 3: printf("+x\n"); break;
		case 4: printf("+y\n"); break;
		case 5: printf("+z\n"); break;							
	}
}

int main() {
	int l, currentDir;
	char s[5];

	while(scanf("%d", &l) && l) {
		currentDir = 3;
		for(int i = 0; i < l - 1; i++) {
			scanf("%s", s);
			if(s[0] == 'N') continue;
			
			currentDir = transform(currentDir, s);
		}
		
		print(currentDir);
	}

	return 0;
}
