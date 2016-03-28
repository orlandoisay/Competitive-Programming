#include <stdio.h>

int q;
bool r = true;
bool h[8],v[8],d1[16],d2[16];
char mp[10][10];

int main() {
    for(int i=0;i<8;i++)
        scanf("%s",mp[i]);

    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            if(mp[i][j]=='*') {
                q++;
                if(h[i] || v[j] || d1[i+j] || d2[7-i+j])
                    r = false;
                else
                    h[i]=v[j]=d1[i+j]=d2[7-i+j]=true;
            }
        }
    }

    if(r && q==8)
        printf("valid\n");
    else
        printf("invalid\n");

    return 0;
}
