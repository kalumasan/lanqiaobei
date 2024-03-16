#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,m,count1=0,count2=0;
	cin>>n>>m;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			count1+=min(i,j);
			count2+=i*j;
		}
	}
	cout<<count1<<" "<<count2-count1<<endl;
	return 0;
	
}
