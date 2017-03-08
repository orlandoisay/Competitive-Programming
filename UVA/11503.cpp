#include <bits/stdc++.h>
using namespace std; 

struct UF {
	int nodes;

	vector <int> parent;
	vector <int> deep;
	vector <int> size;
	
	UF() {}
	
	UF(int n) {
		nodes = n;
		
		parent = vector<int>(n);
		deep = vector<int>(n);
		size = vector<int>(n);
		
		for(int i = 0; i < n; i++)
			parent[i] = i;
			
		for(int i = 0; i < n; i++)
			size[i] = 1;
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
		
		if(ancA == ancB) return;
		
		if(deep[ancA] == deep[ancB]) {
			parent[ancA] = ancB;
			deep[ancB] += 1;
			size[ancB] += size[ancA];
		}
		else if(deep[ancA] < deep[ancB]) {
			parent[ancA] = ancB;
			size[ancB] += size[ancA];
		}
		else {
			parent[ancB] = ancA;
			size[ancA] += size[ancB];
		}
	}
	
	int getSize(int node) {
		return size[ancestor(node)];
	}
};

int T, N, X;
map <string, int> names;

int getNombre() {
	string name;
	cin >> name;
	
	if(names.find(name) != names.end()) 
		return names[name];
	
	return names[name] = X++;
}

int main() {
	cin >> T;
	
	while(T--) {
		cin >> N;
		
		names = map<string, int>();
		
		X = 1;
		
		UF uf(200005);
		
		for(int i=0;i<N;i++) {
			int A = getNombre();
			int B = getNombre();
			
			uf.join(A - 1, B - 1);
			cout << uf.getSize(A - 1) << "\n";
		}
	}
	
	
	return 0;
}

