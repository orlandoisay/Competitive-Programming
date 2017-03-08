#include <bits/stdc++.h>
using namespace std;

struct UF {
	int nodes;
	
	vector <int> parent;
	vector <int> deep;
	
	UF() {}
	
	UF(int n) {
		nodes = n;

		parent = vector<int>(n);
		deep = vector<int>(n);
		
		for(int i = 0; i < n; i++)
			parent[i] = i;
	}
	
	int ancestor(int node) {
		if(parent[node] == node) 
			return node;
		
		return parent[node] = ancestor(parent[node]);
	}
	
	bool connected(int nodeA, int nodeB) {
		return ancestor(nodeA) == ancestor(nodeB);
	}
	
	void join(int nodeA, int nodeB) {
		int ancA = ancestor(nodeA); 
		int ancB = ancestor(nodeB);
		
		if(deep[ancA] == deep[ancB]) {
			parent[ancA] = ancB;
			deep[ancB]++;
		}
		else if(deep[ancA] < deep[ancB]) 
			parent[ancA] = ancB;
		else
			parent[ancB] = ancA;		
	}
};

int T, N, R, W, A, B;
char input[25], op[5];

int main() {
	fgets(input, 25, stdin);
	sscanf(input, "%d", &T);
	fgets(input, 25, stdin);
	
	UF unionFind;
	
	while(fgets(input, 25, stdin) != NULL) {
		if(strlen(input) == 1) {
			T--;
			printf("%d,%d\n", R, W);
			printf("%s", T ? "\n" : "");			
		}
		else if(isdigit(input[0])) {
			R = W = 0;
			sscanf(input, "%d", &N);
			unionFind = UF(N);
		}
		else {
			sscanf(input, "%s %d %d", op, &A, &B);
			if(op[0] == 'c') {
				unionFind.join(A - 1,B - 1);				
			}
			else {
				if(unionFind.connected(A - 1, B - 1))
					R++;
				else
					W++;
			}
		}
	}
	printf("%d,%d\n", R, W);
	

	return 0;
}

