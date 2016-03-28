#include <bits/stdc++.h>

char num[1001];
char numf[1001];

int sum()
{
    int r=0;
    for(int i=0;i<strlen(num);i++)
        r+=num[i]-'0';

    return r;
}

int main()
{
    while(1)
    {
        scanf("%s",numf);
        if(numf[0]=='0')
            break;

        memcpy(num,numf,sizeof(numf));

        int ind=0;
        int rz;

        do
        {
            rz=sum();

            if(rz%9!=0)
                break;

            ind++;

            if(rz==9)
                break;

            sprintf(num,"%d",rz);
        }while(rz%9==0);

        if(ind>0)
            printf("%s is a multiple of 9 and has 9-degree %d.\n",numf,ind);
        else
            printf("%s is not a multiple of 9.\n",numf);
    }

    return 0;
}
