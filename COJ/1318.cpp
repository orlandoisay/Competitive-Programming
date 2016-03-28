#include <stdio.h>

int main()
{
    int a,b,c;
    int A,B,C;
    char abc[4];

    scanf("%d %d %d",&a,&b,&c);
    scanf("%s",abc);

    //Menor
    A=a;
    if(A>b)
    {
        A=b;
    }
    if(A>c)
    {
        A=c;
    }
    C=a;
    if(C<b)
    {
        C=b;
    }
    if(C<c)
    {
        C=c;
    }
    if(a != A && a!=C)
    {
        B=a;
    }
    else if(b != A && b!=C)
    {
        B=b;
    }
    else
    {
        B=c;
    }

    for(int i=0;i<3;i++)
    {
        if(abc[i]=='A')
        {
            printf("%d",A);
        }
        if(abc[i]=='B')
        {
            printf("%d",B);
        }
        if(abc[i]=='C')
        {
            printf("%d",C);
        }
        if(i<2)
        {
        	printf(" ");
        }
    }



    return 0;
}
