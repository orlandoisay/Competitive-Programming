#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;
char buffer[1024];
int l;

//ofstream a("txt.txt");

void lowercase()
{
    for(int i=0;i<l;i++)
    {
        if(buffer[i]>='A' && buffer[i]<='Z')
        {
            buffer[i]=buffer[i]-'A'+'a';
        }
    }
}

int main()
{
    bool cix=true;
    int cuenta=1;
    while(cix)
    {
        cin.getline(buffer,1024);
        l=strlen(buffer);
        lowercase();

        if(buffer[0]=='*' && l==1)
            return 0;
        if(cuenta>1)
        {
            printf("\n");
            //a << "\n";
        }


        int i=0;
        while(buffer[i]==' ')
            i++;

        char C = buffer[i];

        bool Si=true;

        while(i<l)
        {
            while((buffer[i]>='a' && buffer[i]<='z')||(buffer[i]>='A' && buffer[i]<='Z'))
                i++;

            if(i>=l)
                break;

            while(buffer[i]==' ')
                i++;

            if(i>=l)
                break;

            if(buffer[i]!=C)
            {
                Si=false;
                break;
            }

        }

        if(Si)
        {
            printf("Y");
            //a << "Y";
        }
        else
        {
            printf("N");
            //a << "N";
        }

        cuenta++;
    }

    return 0;
}
