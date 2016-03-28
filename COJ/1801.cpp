#include <bits/stdc++.h>

int N,M;
char O[101][101];
int A;
bool D;

int main()
{
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
        scanf("%s",O[i]);

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(O[i][j]==47 || O[i][j]==92)
            {
                if(D)
                {
                    D=false;
                    A++;
                }
                else
                {
                    D=true;
                }
            }
            else if(D)
            {
                A++;
            }
        }
    }

    printf("%d\n",A);
    return 0;
}
