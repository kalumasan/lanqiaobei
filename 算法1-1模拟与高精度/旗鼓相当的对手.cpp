#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int num;
	cin>>num;
	int score[num][3];
	int count=0;
	for(int i=0;i<num;i++){
		cin>>score[i][0]>>score[i][1]>>score[i][2];
	}
	
	for(int i=0;i<num;i++){
		int sum1=score[i][0]+score[i][1]+score[i][2];
		for(int j=i+1;j<num;j++){
			int sum2=score[j][0]+score[j][1]+score[j][2];
			int dis1=abs(score[i][0]-score[j][0]);
			int dis2=abs(score[i][1]-score[j][1]);
			int dis3=abs(score[i][2]-score[j][2]);
			int dis=abs(sum2-sum1);
			if(dis<=10&&dis1<=5&&dis2<=5&&dis3<=5){
				count++;
			}
		}
	}
	cout<<count;
}
