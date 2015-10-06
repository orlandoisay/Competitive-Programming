#include <stdio.h>
#include <string.h>

int N;
char parity[35];


void bin(int A)
{
    int i=0;

    while(A>0)
    {
        parity[i]=(A%2)+'0';
        A/=2;
        i++;
    }

    char b[35];

    for(int i=strlen(parity)-1,j=0;i>=0;i--,j++)
        b[j]=parity[i];

    b[strlen(parity)]='\0';

    memcpy(parity,b,sizeof(b));

    memset(b,0,sizeof(b));

    return;
}

int cuenta()
{
    int c=0;
    for(int i=0;i<strlen(parity);i++)
    {
        if(parity[i]=='1')
            c++;
    }
    return c;
}



int main()
{
    int x=0;
    while(1)
    {
        scanf("%d",&N);

        if(N==0)
            break;

        if(x>0)
            printf("\n");

        bin(N);
        int T=cuenta();

        printf("The parity of %s is %d (mod 2).",parity,T);

        memset(parity,0,sizeof(parity));

        x++;
    }

    return 0;
}
