#include <stdio.h>
#include <string.h>

int main()
{
    char Mdo[51],Ins[51];
    int index=0, NIns;

    scanf("%s",Mdo);
    scanf("%s",Ins);

    NIns = strlen(Ins);

    for(int i=0;i<NIns;i++)
    {
        if(Ins[i]==Mdo[index])
        {
            index++;
        }
    }
    
    
    
    printf("%d",index+1);
    return 0;
}