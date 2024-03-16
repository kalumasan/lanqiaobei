#include<bits/stdc++.h>

using namespace std;

bool IsPrime(int n)
{
	if(n <= 1){
		
		return false;
	}
    for (int i = 2; i <sqrt(n); i++)
    {
        if ((n % i) == 0){
            
            return false;
        }
    }
    
    return true;
}

int n,k;
int ans;
int a[25];

void dfs(int m,int sum,int start){
	if(m==k){
		if(IsPrime(sum))ans++;
		return ;
	}
	for(int i=start;i<n;i++){
		dfs(m+1,sum+a[i],i+1);
	}
	return ;
}

int main(){
	
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,0,0);
	cout<<ans<<endl;
	return 0;
	
}
