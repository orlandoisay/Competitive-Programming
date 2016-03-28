#include <stdio.h>

int n,m;
int o_c,e_c,l_o,l_e;

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&m);

        if(m%2) {
            o_c++;
            l_o = i;
        }
        else {
            e_c++;
            l_e = i;
        }
    }

    if(o_c == 1)
        printf("%d",l_o + 1);
    else
        printf("%d",l_e + 1);
    return 0;
}