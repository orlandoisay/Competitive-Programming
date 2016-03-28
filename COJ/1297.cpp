#include <bits/stdc++.h>

int t;
char n[100001];
int len;

int main()
{
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%s",n);
        len=strlen(n);

        if((n[len-1]!='5'&&n[len-1]!='0')||n[0]=='0')
        {
            printf("NO\n");
        }
        else
        {
            int nueve=0;
            for(int j=0;j<len;j++)
                nueve+=n[j]-'0';
            if(nueve%9!=0)
            {
                printf("NO\n");
            }
            else
            {
                int a=0,b=0;
                for(int j=0;j<len;j++)
                    if(j%2==0)
                        a+=n[j]-'0';
                    else
                        b+=n[j]-'0';

                if(abs(a-b)%11!=0)
                {
                    printf("NO\n");
                }
                else
                {
                    printf("YES\n");
                }

            }
        }
    }
    return 0;
}
