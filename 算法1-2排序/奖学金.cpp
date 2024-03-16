#include<bits/stdc++.h>
using namespace std;

int n;

struct score1{
	int yuwen;
	int shuxue;
	int yingyu;
	int zongfen;
	int no;
}score[300];

bool comp(score1 a,score1 b){
	if(a.zongfen!=b.zongfen){
		return a.zongfen>b.zongfen; 
	}
	else if(a.zongfen==b.zongfen&&a.yuwen!=b.yuwen){
		return a.yuwen>b.yuwen;
	}
	else if(a.zongfen==b.zongfen&&a.yuwen==b.yuwen){
		return a.no<b.no; 
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>score[i].yuwen>>score[i].shuxue>>score[i].yingyu;
		score[i].no=i+1;
		score[i].zongfen=score[i].yuwen+score[i].shuxue+score[i].yingyu;
	}
	sort(score,score+n,comp);
	for(int i=0;i<5;i++){
		cout<<score[i].no<<" "<<score[i].zongfen<<endl;
	}
	return 0;
}
