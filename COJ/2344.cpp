#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

struct Pais{
    string Name;
    int g,s,b;
};

bool menor(Pais A,Pais B)
{
    if(A.g==B.g)
    {
        if(A.s==B.s)
        {
            if(A.b==B.b)
            {
                return A.Name < B.Name;
            }
            return A.b > B.b;
        }
        return A.s > B.s;
    }
    return A.g > B.g;
}

int i=0;
Pais Lista[26];
char buffer[70];
int g,s,b;


int main()
{
    while(1)
    {
        scanf("%s",buffer);

        if(buffer[0]=='#')
        {
            sort(Lista,Lista+i,menor);
            for(int k=0;k<i;k++)
            {
                cout << Lista[k].Name << endl;
            }
            return 0;
        }
        else if(buffer[0]=='@')
        {
            sort(Lista,Lista+i,menor);
            for(int k=0;k<i;k++)
            {
                cout << Lista[k].Name << endl;
            }

            cout << "@" << endl;

            i=0;
        }
        else
        {
            scanf("%d %d %d",&g,&s,&b);

            Lista[i].Name=buffer;
            Lista[i].g=g;
            Lista[i].s=s;
            Lista[i].b=b;
            i++;
        }
    }




    return 0;
}
