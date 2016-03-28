#include <bits/stdc++.h>
using namespace std;

int LastEven=-1;
char N[200010];
int LEN;

int main(){
    scanf("%s",N);
    LEN=strlen(N);
    for(int i=0;i<LEN;i++){
        if((N[i]-'0')%2==0)
            LastEven=i;
    }
    if(LastEven==-1){
        printf("-1");
        return 0;
    }
    for(int i=0;i<LEN;i++){
        if((N[i]-'0')%2==0){
            if(i!=LastEven && N[i]<N[strlen(N)-1]){
                char tmp = N[i];
                N[i]=N[strlen(N)-1];
                N[strlen(N)-1]=tmp;
                printf("%s",N);
                return 0;
            }
            else if(i==LastEven) {
                char tmp = N[i];
                N[i]=N[strlen(N)-1];
                N[strlen(N)-1]=tmp;
                printf("%s",N);
                return 0;
            }
        }
    }

    return 0;
}