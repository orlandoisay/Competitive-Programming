#include <stdio.h>

int main()
{
    int k;
    char arr[5][5];
    char num[10];

    for(int i=0;i<10;i++)
    {
        num[i]=0;
    }

    scanf("%d",&k);

    for(int i=0;i<4;i++)
    {
        scanf("%s",arr[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(char k='0';k<='9';k++)
            {
                if(arr[i][j]==k)
                {
                    num[k-'0']++;
                }
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        if(2*k<num[i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}