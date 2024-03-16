#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		int flag=0;
		if(i>0){
			for(int j=0;j<i;j++){
				if(a[j]==a[i])flag=1;
			}
		}
		if(flag==1){
			i--;
			n--;
		}
		
	}
	sort(a,a+n); 
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
