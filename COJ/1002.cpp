#include <iostream>
#include <cstdio>
using namespace std;
const int N=109;
char a[N][N];
bool check(int x1,int y1,int x2,int y2)
{
	for(int i=x1;i<=x2;i++)
		for(int j=y1;j<=y2;j++)
			if(a[i][j]=='#')
				return false;
	return true;
}
int main()
{
	int ans,b,c,d,e,n,x,y,m,t,i,j,k,max,row,col,size;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>n;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];
		ans=0;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(a[i][j]=='.')
				{
					max=1;
					x=i+1;
					y=j+1;
					while(x<=n && y<=n && check(i,y,i+max,y) && check(x,j,x,j+max) )
					{
						x++;
						y++;
						max++;
					}
					if(max>ans)
						ans=max;
				}
		cout<<ans<<endl;
	}
	return 0;
}