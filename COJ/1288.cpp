#include <stdio.h>
#include <string.h>

int N;
char Num[1001];
int Sum;

int main()
{
	scanf("%d",&N);
	
	for(int i=0;i<N;i++)
	{
		scanf("%s",Num);		
		int Last = Num[strlen(Num)-1] - '0';
		Sum=0;
		for(int j=0;j<strlen(Num);j++)
		{
			Sum+=(Num[j]-'0');
		}
		
		
		if(Last%2==0 && Sum%3==0)
			printf("YES");
		else 
			printf("NO");
	
		if(i<N-1)
			printf("\n");
	}
	return 0;
}