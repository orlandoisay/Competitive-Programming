#include <bits/stdc++.h>
using namespace std;

int a,b;

int main() {
    scanf("%d %d",&a,&b);

    if(min(a,b)%2)
        printf("Akshat");
    else
        printf("Malvika");

    return 0;
}