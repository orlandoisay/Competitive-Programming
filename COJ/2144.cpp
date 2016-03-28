#include <stdio.h>
#include <algorithm>

int T,R;

int N,D;
char w[20];
int A[1000];
int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d %d %s",&N,&D,w);
        R=0;

        for(int j=0;j<N;j++)
        {
            scanf("%d",&A[j]);
        }

        std::sort(A,A+N);

        if(w[0]=='r')
        {
            for(int j=N-1;j>=N-D;j--)
            {
                R+=A[j];
            }
        }
        else
        {
            for(int j=0;j<D;j++)
            {
                R+=A[j];
            }
        }
        printf("%d\n",R);
    }
    return 0;
}
