#include<bits/stdc++.h>

using namespace std;

struct toy{
	int head;
	string name;
}a[10010];

struct mingling{
	int fangxiang;
	int count;
}b[10010];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i].head>>a[i].name;
	}

	for(int i=0;i<m;i++){
		cin>>b[i].fangxiang>>b[i].count;
	}
	
	int flag=0;
	for(int i=0;i<m;i++){
		if(b[i].fangxiang==0){
			if(a[flag].head==0)flag=(flag+n-b[i].count)%n;
			else flag=(flag+b[i].count)%n;
		}
		else{
			if(a[flag].head==0)flag=(flag+b[i].count)%n;
			else flag=(flag+n-b[i].count)%n;
		}
	}
	cout<<a[flag].name;
	return 0;
}
