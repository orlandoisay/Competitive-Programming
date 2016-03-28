#include <stdio.h>
#include <string.h>
#include <algorithm>

int N,CpK[11];
int Ca[101],Tu[101];
int Cmn[100],Ctmp[100],Cfx[100];

void compSec()
{
    bool mn=true;

    for(int i=0;i<Tu[N];i++)
    {
        if(Ctmp[i]<Cmn[i])
        {
            mn=false;
            break;
        }
        else if(Ctmp[i]>Cmn[i])
        {
            break;
        }
    }
    if(!mn)
    {
        for(int i=0;i<Tu[N];i++)
        {
            Cmn[i]=Ctmp[i];
        }
    }
}

void reg(int Pos,int ArrInd)
{
    if(Pos==0)
    {
        for(int i=0;i<Tu[N];i++)
            Ctmp[i]=Cfx[i];
        std::sort(Ctmp,Ctmp+Tu[N]);
        compSec();
    }

    for(int i=0;i<10;i++)
    {
        if(Pos-1-i>=0 && Tu[Pos-1-i]==Tu[Pos]-1)
        {
            if(Ca[Pos-1-i]+CpK[1+i]==Ca[Pos])
            {
                Cfx[ArrInd]=1+i;
                reg(Pos-1-i,ArrInd+1);
            }
        }

    }
}

int main()
{
    for(int i=1;i<=10;i++)
        scanf("%d",&CpK[i]);
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        int mn=1<<30;
        int mnTu=1<<30;
        for(int j=0;j<10;j++)
        {
            if(i-1-j>=0)
            {
                if(Ca[i-1-j]+CpK[1+j]<mn)
                {
                    mn=Ca[i-1-j]+CpK[1+j];
                    mnTu=Tu[i-1-j];
                }
                else if(Ca[i-1-j]+CpK[1+j]==mn)
                {
                    if(Tu[i-1-j]<mnTu)
                        mnTu=Tu[i-1-j];
                }
            }
        }
        Ca[i]=mn;
        Tu[i]=mnTu+1;
    }

    for(int i=0;i<Tu[N];i++)
        Cmn[i]=20;

    reg(N,0);

    for(int i=0;i<Tu[N];i++)
        printf("%d %d\n",Cmn[i],CpK[Cmn[i]]);
    printf("%d\n",Ca[N]);



    return 0;
}
