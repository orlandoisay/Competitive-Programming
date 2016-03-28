#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int vol, pasos;
}Est;

int T;
int a,b;
Est Inicial;
queue <Est> cola;


bool u[100000];

int main()
{
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&a,&b);
        memset(u,0,sizeof(u));
        Inicial.vol=a;
        Inicial.pasos=0;

        cola.push(Inicial);

        while(!cola.empty())
        {
            Est act=cola.front();
            cola.pop();
            if(act.vol==b)
            {
                printf("%d\n",act.pasos);
                while(!cola.empty())
                    cola.pop();
                break;
            }

            if(!u[act.vol/2])
            {
                u[act.vol/2]=true;
                Est nv;
                nv.vol=act.vol/2;
                nv.pasos=act.pasos+1;
                cola.push(nv);
            }

            if(!u[act.vol+1])
            {
                u[act.vol+1]=true;
                Est nv;
                nv.vol=act.vol+1;
                nv.pasos=act.pasos+1;
                cola.push(nv);
            }


        }
    }
    return 0;
}
