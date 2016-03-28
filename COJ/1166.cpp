#include <stdio.h>

int T,N;
int even,odd,tmp;

int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);

        even=0;
        odd=0;

        for(int j=0;j<N;j++)
        {
            scanf("%d",&tmp);
            if(tmp%2==0)
                even++;
            else
                odd++;
        }

        printf("%d even and %d odd.\n",even,odd);
    }

    return 0;
}
