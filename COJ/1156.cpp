#include <stdio.h>


int main()
{
	int i=0;
	
	while(1)
	{
		if(i>0)
			printf("\n");
		int a;
		scanf("%d",&a);
		if(a==42)
			break;
		else
			printf("%d",a);
		i++;
	}    

    

    return 0;
}