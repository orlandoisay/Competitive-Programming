#include <stdio.h>
#include <string.h>


int N;
char Numero[25];

int Decimal()
{
    int Num=0;
    for(int i=0;i<strlen(Numero);)
    {
        int A=0,B=0;

        switch(Numero[i])
        {
            case 'M':
            A=1000;
            break;
            case 'D':
            A=500;
            break;
            case 'C':
            A=100;
            break;
            case 'L':
            A=50;
            break;
            case 'X':
            A=10;
            break;
            case 'V':
            A=5;
            break;
            case 'I':
            A=1;
            break;
        }
        switch(Numero[i+1])
        {
            case 'M':
            B=1000;
            break;
            case 'D':
            B=500;
            break;
            case 'C':
            B=100;
            break;
            case 'L':
            B=50;
            break;
            case 'X':
            B=10;
            break;
            case 'V':
            B=5;
            break;
            case 'I':
            B=1;
            break;
        }

        if(A<B)
        {
            Num+=(B-A);
            i+=2;
        }
        else
        {
            Num+=A;
            i++;
        }
    }
    return Num;
}




int main()
{
	scanf("%d",&N);
	
	for(int i=0;i<N;i++)
	{
		memset(Numero,0,sizeof(Numero));
		scanf("%s",Numero);
		
		int R = Decimal();
		
		if(R%3==0)
			printf("YES %d",R);
		else
			printf("NO %d",R);
		
		if(i<N-1)
		{
			printf("\n");
		}
	}    

	return 0;
}