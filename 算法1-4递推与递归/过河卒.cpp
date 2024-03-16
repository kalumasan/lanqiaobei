#include<bits/stdc++.h>

using namespace std;
int n,m,a,b;
int f[50][50],g[50][50];


int main(){
	cin>>n>>m>>a>>b;
	f[a][b]=1;
	if(a-1>=0&&b-2>=0)f[a-1][b-2]=1;
	if(a+1<=n&&b-2>=0)f[a+1][b-2]=1;
	if(a+1<=n&&b+2<=m)f[a+1][b+2]=1;
	if(a-1>=0&&b+2<=m)f[a-1][b+2]=1;
	if(a-2>=0&&b-1>=0)f[a-2][b-1]=1;
	if(a-2>=0&&b+1<=m)f[a-2][b+1]=1;
	if(a+2<=n&&b-1>=0)f[a+2][b-1]=1;
	if(a+2<=n&&b+1<=m)f[a+2][b+1]=1;
	g[0][0]=1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(f[i][j]==0){
				if(i>0)g[i][j]+=g[i-1][j];
				if(j>0)g[i][j]+=g[i][j-1];
			}
		}
	}
	cout<<g[n][m]<<endl;
	return 0;
	
}
