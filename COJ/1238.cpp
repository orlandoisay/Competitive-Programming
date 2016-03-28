#include <stdio.h>
#include <string.h>

char N[6];
int F[5]={1,2,6,24,120};

int main()
{
	int x=1;
	while(1)
	{
		memset(N,0,sizeof(N));
		scanf("%s",N);
	
		if(N[0]=='0')
			break;
			
		if(x>1)
			printf("\n");		
		
		int R=0;
		
		for(int i=0;i<strlen(N);i++)
		{
			R+=(N[strlen(N)-(i+1)]-'0')*F[i];
		}
		printf("%d",R);
		x++;		
	}
	return 0;
}