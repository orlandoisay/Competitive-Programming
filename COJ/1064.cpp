#include <stdio.h>

int a[4];
int z[3];

int main()
{
    while(1)
    {
        for(int i=0;i<4;i++)
            scanf("%d",&a[i]);

        if(!a[0]&&!a[1]&&!a[2]&&!a[3])
            break;

        z[0]=a[0]*60+a[1];
        z[1]=a[2]*60+a[3];

        if(z[1]<z[0])
            z[1]+=(24*60);

        printf("%d\n",z[1]-z[0]);   
    }

    return 0;
}
