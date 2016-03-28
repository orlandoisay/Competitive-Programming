#include <stdio.h>

int A,B,C;
char W[100];

int main(){
	scanf("%s",W);
	scanf("%d %d",&A,&B);
	
	C=A-B;
	if(C<0)
		C*=-1;

	printf("%s %d\n",W,C);

	return 0;
}