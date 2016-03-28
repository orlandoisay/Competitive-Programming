#include <stdio.h>


int main()
{
    int n;
    char spc[2000];
    int l=0,r=0;

    scanf("%d",&n);
    scanf("%s",spc);

    for(int i=0;i<n;i++)
    {
        if(spc[i]=='L')
        {
            l++;
        }
        if(spc[i]=='R')
        {
            r++;
        }
    }

    int s=-1, t=-1;
    if(l>0 && r>0)
    {
        for(int i=0;i<n;i++)
        {
            if(spc[i]=='R' && s<0)
            {
                s=i+1;
            }
            if(spc[i]=='L' && t<0)
            {
                t=i;
            }
        }
    }
    else if(l==0)
    {
        int index=0;
        while(spc[index]=='.')
        {
            index++;
        }
        s=index+1;
        while(spc[index]!='.')
        {
            index++;
        }
        t=index+1;
    }
    else if(l>0)
    {
        int index=n-1;
        while(spc[index]=='.')
        {
            index--;
        }
        s=index+1;
        while(spc[index]!='.')
        {
            index--;
        }
        t=index+1;
    }

    printf("%d %d",s,t);
    return 0;
}