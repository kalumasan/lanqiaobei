#include<bits/stdc++.h>

using namespace std;

int n,len=1,a[5050][5050]={0};

void stairadd(int k){
	for(int i=1;i<=len;i++){
		a[k][i]=a[k-1][i]+a[k-2][i];
	}
	for(int i=1;i<=len;i++){
		a[k][i+1]+=a[k][i]/10;
		a[k][i]=a[k][i]%10;
		if(a[k][len+1]!=0)len++;
	}
}


int main(){
	a[1][1]=1;
	a[2][1]=2;
	cin>>n;
	for(int i=3;i<=n;i++){
		stairadd(i);
	}
	for(int i=len;i>=1;i--){
		cout<<a[n][i];
	}
	return 0;
}
