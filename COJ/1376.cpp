#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int n;
char a[7];
vector <int> b;
bool u[1000000];



int main()
{
    scanf("%d",&n);

    sprintf(a,"%d",n);

    sort(a,a+strlen(a));

    for(int i=0;i<strlen(a);i++)
    {
        b.push_back(i);
    }

    do
    {
        char r[7];
        int x;



        for(int i=0;i<strlen(a);i++)
            r[i]=a[b[i]];
        x=atoi(r);



        if(!u[x])
        {
            u[x]=true;
            if(x>n)
            {
                printf("%d\n",x);
                return 0;
            }
        }
    }while(next_permutation(b.begin(),b.end()));

    printf("0\n");

    return 0;
}
