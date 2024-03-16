#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int num[9]={1,2,3,4,5,6,7,8,9};
	int flag=0;
	do{
		int tmp1=100*num[0]+10*num[1]+num[2];
		int tmp2=100*num[3]+10*num[4]+num[5];
		int tmp3=100*num[6]+10*num[7]+num[8];
		if(tmp1*b*c==tmp2*a*c&&tmp1*b*c==tmp3*a*b&&tmp2*a*c==tmp3*a*b){
			cout<<tmp1<<" "<<tmp2<<" "<<tmp3<<endl;
			flag++;
		}
	}while(next_permutation(num,num+9));
	if(flag==0){
		cout<<"No!!!";
	}
	return 0;
}
