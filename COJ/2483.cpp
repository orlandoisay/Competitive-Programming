#include <stdio.h>

typedef struct
{
    int x,y;
}Vertex;

Vertex a[3];

int main()
{
    for(int i=0;i<3;i++)
        scanf("%d %d",&a[i].x,&a[i].y);

    if(a[0].x == a[1].x && a[0].y == a[2].y)
    {
        printf("%d %d",a[2].x,a[1].y);
    }
    else if(a[0].x == a[2].x && a[0].y == a[1].y)
    {
        printf("%d %d",a[1].x,a[2].y);
    }
    else if(a[1].x == a[0].x && a[1].y == a[2].y)
    {
        printf("%d %d",a[2].x,a[0].y);
    }
    else if(a[1].x == a[2].x && a[1].y == a[0].y)
    {
        printf("%d %d",a[0].x,a[2].y);
    }
    else if(a[2].x== a[0].x && a[2].y == a[1].y)
    {
        printf("%d %d",a[1].x,a[0].y);
    }
    else if(a[2].x== a[1].x && a[2].y == a[0].y)
    {
        printf("%d %d",a[0].x,a[1].y);
    }
    printf("\n");

    return 0;
}
