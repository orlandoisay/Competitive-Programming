#include <stdio.h>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main()
{
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sort(arr,arr+N);
	
	for(int i=0;i<N;i++)
	{
		printf("%d",arr[i]);
		if(i<N-1)
			printf("\n");
	}
	return 0;
}