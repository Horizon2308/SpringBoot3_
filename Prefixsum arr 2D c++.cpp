#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;cin>>n>>m;
	int a[n+1][m+1];
	int pre[n+1][m+1]={0};
	for(int i=1; i<=n; i++)
	{
		for(int j=1; i<=m; j++)
		{
			cin>>a[i][j];
		}
	}
	int h1,h2,c1,c2;
	cin>>h1>>h2>>c1>>c2;
	for(int i=1; i<=n; i++)1
	
	{
		for(int j=1; j<=m; j++)
		{
			pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
		}
	}
	cout<<(pre[h2][c2])-pre[h1-1][c2]-pre[c1-1][h2]+pre[h1-1][c1-1]<<endl;
	return 0;
}