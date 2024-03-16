#include<bits/stdc++.h>

using namespace std;

int n,r;
int a[21],b[20];

void dfs(int m,int start){
	if(m==r){
		for(int i=0;i<r;i++){
			cout << setw(3) << b[i];
		}
		cout<<endl;
		return ;
	}
	else{
		for(int j=start;j<n;j++){
		b[m]=a[j];
		dfs(m+1,j+1);
	}
	}
	
	return;
}

int main(){
	
	cin>>n>>r;
	
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	
	dfs(0,0);
	return 0;
}
