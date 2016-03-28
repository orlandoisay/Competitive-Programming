#include <bits/stdc++.h>

char a[101],b[101];

int main()
{
    while(1)
    {
        scanf("%s",a);

        if(a[0]=='X')
            break;

        scanf("%s",b);

        int r=0;

        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]!=b[i])
                r++;
        }

        printf("Hamming distance is %d.\n",r);
    }
    return 0;
}
