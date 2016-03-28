#include <stdio.h>

int n;
int Trees[100000];
int total=0;
int hAct=0;

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&Trees[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(hAct<Trees[i])
        {
            total+=Trees[i]-hAct;
            hAct=Trees[i];
        }
        if(i<n-1)
        {
            if(hAct>Trees[i+1])
            {
                total+=hAct-Trees[i+1];
                hAct=Trees[i+1];
            }
            total++;
        }
    }


    printf("%d",total+n);

    return 0;
}