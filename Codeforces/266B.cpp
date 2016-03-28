#include <stdio.h>
#include <string.h>

void swap(char &a,char &b) {
    char c = a;
    a = b;
    b = c;
}

int n,t;
char str[60];
bool u[60];

int main() {
    scanf("%d %d",&n,&t);
    scanf("%s",str);

    while(t--) {
        memset(u,0,sizeof(u));
        for(int i=0;i<n-1;i++) {
            if(str[i] == 'B' && str[i+1] == 'G')
                u[i]=1;
        }

        for(int i=0;i<n-1;i++) {
            if(u[i]) {
                swap(str[i],str[i+1]);
            }
        }
    }

    printf("%s",str);

    return 0;
}