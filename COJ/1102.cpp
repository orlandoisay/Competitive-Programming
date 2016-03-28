#include <stdio.h>
#include <string.h>

char L[1001];
int A,B;

int main()
{
	int c=0;
	while(1)
	{
		scanf("%s",L);	
		
		if(L[0]=='0')
		{
			break;
		}
		
		if(c>0)
			printf("\n");
		A=0;
		B=0;
		
		for(int i=0;i<strlen(L);i++)
		{
			if(i%2==0)
			{
				A+=(L[i]-'0');
			}
			else
			{
				B+=(L[i]-'0');
			}
		}
		
		if((A-B)%11==0)
			printf("%s is a multiple of 11.",L);
		else
			printf("%s is not a multiple of 11.",L);
		
		c++;		
	}
}