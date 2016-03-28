#include <stdio.h>
#include <string.h>

int N,len;
char Num[1001];

int main()
{
	scanf("%d",&N);

	for(int i=0;i<N;i++)
	{
		scanf("%s",Num);

		len=strlen(Num);

		if(len==1)
		{
			if((Num[0]-'0')%4==0)
				printf("YES");
			else
				printf("NO");
		}
		else if(len>=1)
		{
			int A = (Num[len-1]-'0')+((Num[len-2]-'0')*10);
			if(A%4==0)
			{
				printf("YES");
			}
			else
			{
				printf("NO");
			}
		}

		if(i<N-1)
			printf("\n");

	}
	return 0;
}
