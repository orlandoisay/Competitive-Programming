#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

bool founded=false;
char entrada[11];
int len;
int salida[250];
int cubo[250];
int lf;

void fcubic(int cifra)
{
    int a[250],b[250],c[250];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(a));
    memset(c,0,sizeof(a));


    c[0]=1;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=cifra;j++)
        {
            memset(a,0,sizeof(a));

            for(int k=0;k<200;k++)
            {
                a[j+k]+=(c[k]*salida[j]);
                a[j+k+1]+=a[j+k]/10;
                a[j+k]%=10;
            }

//            printf("c");
//            for(int k=50;k>=0;k--)
//                printf("%d",c[k]);
//            printf("\n*");
//            for(int k=50;k>=0;k--)
//                printf("%d",a[k]);
//            printf("\n");
//            system("pause");


            for(int k=0;k<200;k++)
            {
                b[k]+=a[k];
                b[k+1]+=b[k]/10;
                b[k]%=10;
            }
        }

        memcpy(c,b,sizeof(b));
        memset(b,0,sizeof(b));
    }

    memcpy(cubo,c,sizeof(c));
}

bool comp(int cifra)
{
//    for(int i=cifra;i>=0;i--)
//        printf("%d",salida[i]);
//
//    printf("\n");

    fcubic(cifra);

//    for(int i=35;i>=0;i--)
//        printf("%d ",cubo[i]);
//    printf("\n");

    int k=0;
    int j=0;

    for(j=0;j<len;j++)
    {
        k=j;
        if(cubo[j]!=entrada[len-1-j]-'0')
            break;
    }

    k=j;

//    printf("(((%d)))\n",k);
//    system("pause");

    if(k==len)
    {
        //printf("Encontrado!");
        lf=cifra;
        founded=true;
        return false;
    }
    else if(k>cifra)
        return true;
    else
        return false;


}

void fx(int cifra)
{
    //printf("[%d]\n",cifra);
    for(int i=0;i<=9;i++)
    {
        if(!founded)
        {
            salida[cifra]=i;
            if(comp(cifra))
                fx(cifra+1);
        }
    }
}

int T;

int main()
{
    scanf("%d",&T);

    while(T--) {
        founded = false;
        scanf("%s", entrada);
        len=strlen(entrada);

        fx(0);

        for(int i=lf;i>=0;i--)
            printf("%d",salida[i]);
        printf("\n");
    }

    return 0;
}
