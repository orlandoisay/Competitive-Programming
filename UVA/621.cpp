#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main() {
	cin >> N;
	
	while(N--) {
		cin >> S;
		int l = S.size();
		
		if(S == "1" || S == "4" || S == "78") 
			cout << "+\n";
		else if(S[l-2] == '3' && S[l-1] == '5') 
			cout << "-\n";		
		else if(S[0] == '9' && S[l-1] == '4')
			cout << "*\n";
		else
			cout << "?\n";		
	}
	return 0;
}
