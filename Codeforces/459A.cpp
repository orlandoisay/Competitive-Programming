#include <bits/stdc++.h>

typedef struct{
    int x,y;
}vertex;


vertex a,b,c,d;

int main()
{
    scanf(" %d %d %d %d",&a.x,&a.y,&b.x,&b.y);

    //Caso paralelas

    int dx,dy;
    dx=abs(a.x-b.x);
    dy=abs(a.y-b.y);

    if(dx==0)
    {
        if(a.x+dy<=1000)
        {
            printf("%d %d %d %d",a.x+dy,a.y,a.x+dy,b.y);
            return 0;
        }
        else if(a.x-dy>=-1000)
        {
            printf("%d %d %d %d",a.x-dy,a.y,a.x-dy,b.y);
            return 0;
        }
        else
        {
            printf("-1");
            return 0;
        }
    }

    if(dy==0)
    {
        if(a.y+dx<=1000)
        {
            printf("%d %d %d %d",a.x,a.y+dx,b.x,a.y+dx);
            return 0;
        }

        if(a.y-dx>=-1000)
        {
            printf("%d %d %d %d",a.x,a.y-dx,b.x,a.y-dx);
            return 0;
        }
        else
        {
            printf("-1");
            return 0;
        }
    }

    if(dx!=dy)
    {
        printf("-1");
        return 0;
    }
    else
    {
        printf("%d %d %d %d",a.x,b.y,b.x,a.y);
    }

    return 0;
}