#include <stdio.h>
#include <string.h>

int N;
char Num[1001];

int main()
{
	scanf("%d",&N);
	
	for(int i=0;i<N;i++)
	{
		scanf("%s",Num);
		
		char Last = Num[strlen(Num)-1];
		
		if(Last=='0' || Last =='5')
			printf("YES");
		else 
			printf("NO");
	
		if(i<N-1)
			printf("\n");
	}
	return 0;
}