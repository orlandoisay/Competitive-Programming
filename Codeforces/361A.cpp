#include <stdio.h>

int main() {

    int levko[100][100];
    int n, k;
    scanf("%d%d",&n,&k);
    
    //Llenando de ceros
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            levko[i][j]=0;
        }
    }
    
    //Diagonal
    for(int i=0;i<n;i++)
    {
        levko[i][i]=k;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",levko[i][j]);
        }
        printf("\n");
    }
    return 0;
}