#include <stdio.h>
#include <stdlib.h>

long long int w,m,k;
long long int total=0;

long long int s(long long int a)
{
    long long int cuenta=1;
    while(a>9)
    {
        cuenta++;
        a/=10;
    }
    return cuenta;
}

int main()
{
    scanf("%I64d %I64d %I64d",&w,&m,&k);

    long long int sOrig;
    long long int diez;

    long long int f;

    while(w>=s(m)*k)
    {

        sOrig=s(m);
        diez=1;
        for(int i=0;i<sOrig;i++)
            diez*=10;

        f=diez-m;
       // printf("%RESTAN :%I64d\n M:%I64d - S(M):%I64d - U:%I64d - F:%I64d\n---------------->\n",w,m,sOrig,diez,f);
        //ystem("pause");

        if(((w/f)/sOrig)/k>0)
        {
            //printf("\nYES\n");
            w-=f*sOrig*k;
            m=diez;
            total+=f;
        }
        else
        {
            //printf("\nNO\n");
            total+=w/(sOrig*k);
            break;
        }
    }


    printf("%I64d",total);
    return 0;
}

/*




#include <stdio.h>
#include <stdlib.h>

long long int w,m,k;
long long int total=0;

long long int s(long long int a)
{
    long long int cuenta=1;
    while(a>9)
    {
        cuenta++;
        a/=10;
    }
    return cuenta;
}

int main()
{
    scanf("%I64d %I64d %I64d",&w,&m,&k);

    long long int sOrig;
    long long int diez;

    long long int f;

    while(w>=s(m)*k)
    {
        w-=s(m)*k;
        total++;
        m++;
    }


    printf("%I64d",total);
    return 0;
}





*/