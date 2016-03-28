#include <bits/stdc++.h>
using namespace std;

int a,b,s;

int main() {
    scanf("%d %d %d",&a,&b,&s);
    a = abs(a);
    b = abs(b);

    if(s>=a+b && s%2 == (a+b)%2)
        printf("Yes");
    else
        printf("No");

    return 0;
}