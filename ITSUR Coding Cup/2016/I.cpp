#include <bits/stdc++.h>
using namespace std;

int a, c, m, x,pos,act,noRep;
int arr[3][2000];


int main(){
    while(scanf("%d%d%d%d",&a,&c,&m,&x)!=EOF){
        memset(arr,0,sizeof(arr));
        pos=0;
        act = x;
        while(arr[0][act]==0){
            arr[0][act]=1;
            arr[1][act]=pos;
            pos++;
            act = ((a*act)+c)%m;
        }
        if(pos>=m)
            printf("YES ");
        else
            printf("NO ");
        noRep=arr[1][act];
        printf("%d %d %d\n",pos, noRep, pos-noRep);
    }
    return 0;
}
