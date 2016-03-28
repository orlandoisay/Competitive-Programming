#include <bits/stdc++.h>

int n;

int a[10000];

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    std::sort(a,a+n);

    printf("%d",a[n-1]);

    for(int i=0;i<n-1;i++)
        printf(" %d",a[i]);



    return 0;
}
