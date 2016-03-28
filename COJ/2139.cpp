#include <stdio.h>
#include <string.h>

int la,lb;
char A[100001],B[100001];
int main()
{
    while(scanf("%s %s",A,B)!=EOF)
    {
        la=strlen(A);
        lb=strlen(B);
        int j=0;
        for(int i=0;i<lb;i++)
        {
            if(j==la)
                break;
            if(B[i]==A[j])
                j++;
        }
        if(j==la)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
