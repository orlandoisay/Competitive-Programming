#include <bits/stdc++.h>
using namespace std;

int N, P, k;
double MXC = -1.0;
double MNP =  0.0;
string S, NAME;

int main() {
    while(cin >> N >> P && N && P) {
        for(int i = 0; i < N; i++) cin >> S;

        for(int i = 0; i < P; i++) {
            double R_i, P_i;

            cin >> S;
            cin >> P_i >> R_i;

            for(int j = 0; j < R_i; j++) {
                string T; cin >> T;
            }

            double C_i = R_i / (double)N;

            if(C_i > MXC) {
                MXC = C_i;
                NAME = S;
                MNP = P_i;
            }
            else if(C_i == MXC && P_i < MNP){
                MNP = P_i;
                NAME = S;
            }
        }

        cout << (k > 0 ? "\n" : "");
        cout << "RFP #" << ++k << "\n" << NAME << "\n";
    }

    return 0;
}
