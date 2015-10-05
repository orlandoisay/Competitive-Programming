#include <bits/stdc++.h>

int n,l;
int a[100];

void ord(int lon)
{
    int ch=0;
    for(int i=0;i<lon;i++)
    {
        for(int j=0;j<lon-1;j++)
        {
            if(a[j]>a[j+1])
            {
                ch++;
                std::swap(a[j],a[j+1]);
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",ch);
}

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&l);

        for(int j=0;j<l;j++)
            scanf("%d",&a[j]);

        ord(l);
    }

    return 0;
}
