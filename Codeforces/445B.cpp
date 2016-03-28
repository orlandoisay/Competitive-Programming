#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int N,M;
ll R=1;
vector <int> AD[51];
queue <int> cola;
bool U[51];

ll pow(int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(n/2) * pow(n/2);
    }
    return 2 * pow(n-1);
}

int main(){
    scanf("%d %d",&N,&M);

    for(int i=0;i<M;i++){
        int A,B;
        scanf("%d %d",&A,&B);
        AD[A].push_back(B);
        AD[B].push_back(A);
    }

    int NODOS=0;

    for(int i=0;i<N;i++){
        if(!U[i]){
            U[i]=true;
            cola.push(i);
            while(!cola.empty()){
                ll Act=cola.front();
                cola.pop();
                for(int j=0;j<AD[Act].size();j++){
                    if(!U[AD[Act][j]]){
                        U[AD[Act][j]]=true;
                        NODOS++;
                        cola.push(AD[Act][j]);
                    }
                }
            }
        }
    }

    printf("%I64d",pow(NODOS));

    return 0;
}