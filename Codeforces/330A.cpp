#include <stdio.h>
#include <string.h>

int main()
{
	int r, c;
	char pastel[10][10];
	char comer[10][10];
	int cakes =0;	
	
	
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++)
	{
		scanf("%s",pastel[i]);
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			comer[i][j]=0;
		}
	}	
	
	for(int i=0;i<r;i++)
	{		
		int var =0;
		for(int j=0;j<c;j++)
		{
			if(pastel[i][j]=='S')
			{
				var++;	
			}			
		}
		if(var==0)
		{
			for(int j=0;j<c;j++)
			{
				comer[i][j]=1;		
			}	
		}				
	}
	
	for(int i=0;i<c;i++)
	{		
		int var =0;
		for(int j=0;j<r;j++)
		{
			if(pastel[j][i]=='S')
			{
				var++;	
			}			
		}
		if(var==0)
		{
			for(int j=0;j<r;j++)
			{
				comer[j][i]=1;		
			}	
		}				
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cakes+=comer[i][j];
		}
	}		
		
	printf("%d",cakes);
	return 0;
}