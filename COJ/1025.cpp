#include <iostream>
#include <algorithm>
using namespace std;
int a[200];
int main() 
{
	int i,j,b,c,d,e,n,m;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	int ans=0;
	for(i=1;i<=n/2+1;i++)
		ans=ans+a[i]/2+1;
	cout<<ans<<endl;
	// your code goes here
	return 0;
}