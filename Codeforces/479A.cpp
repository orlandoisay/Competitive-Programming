#include <stdio.h>
#include <algorithm>
using namespace std;

int a,b,c;

int main() {
    scanf("%d %d %d",&a,&b,&c);

    printf("%d", max(max(max(a*(b+c),(a+b)*c),a*b*c),a+b+c));
    return 0;
}