#include <stdio.h>

int main()
{
    int n;
    int point[1000];
    int interseccion=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&point[i]);
    }


    for(int i=1;i<n;i++)
    {
        int a, b;
        a= point[i-1];
        b= point[i];
        for(int j=1;j<n;j++)
        {
            int x, y;
            x = point[j-1];
            y = point[j];

            if(x < a && a < y)
            {
                if(b > y || b < x)
                {
                    interseccion++;
                }
            }
            if(x > a && a > y)
            {
                if(b > x || b < y)
                {
                    interseccion++;
                }
            }
            if(x < b && b < y)
            {
                if(a > y || a < x)
                {
                    interseccion++;
                }

            }
            if(x > b && b > y)
            {
                if(a > x || a < y)
                {
                    interseccion++;
                }

            }
        }
    }

    
    if(interseccion > 0)
    {
        printf("yes");
    }
    
    else
    {
        printf("no");
    }

    return 0;
}