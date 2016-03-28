#include <stdio.h>

int main()
{
    char cubo[5][5];
    for(int i=0;i<4;i++)
    {
        scanf("%s",cubo[i]);
    }

    int var=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(cubo[i][j]=='#')
                var++;
            if(cubo[i][j+1]=='#')
                var++;
            if(cubo[i+1][j]=='#')
                var++;
            if(cubo[i+1][j+1]=='#')
                var++;

            if(var>=3)
            {
                printf("YES");
                return 0;
            }
            var=0;
        }
    }
    

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(cubo[i][j]=='.')
                var++;
            if(cubo[i][j+1]=='.')
                var++;
            if(cubo[i+1][j]=='.')
                var++;
            if(cubo[i+1][j+1]=='.')
                var++;

            if(var>=3)
            {
                printf("YES");
                return 0;
            }
            var=0;
        }
    }

    printf("NO");
    return 0;
}