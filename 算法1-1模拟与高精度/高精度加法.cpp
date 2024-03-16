#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
using namespace std;

string add(string str1,string str2){
	string str;
	int len1=str1.length();
	int len2=str2.length();
	if(len1>len2){
		int len=len1-len2;
		for(int i=1;i<=len;i++){
			str2="0"+str2;
		}
	}
	else if(len1<len2){
		int len=len2-len1;
		for(int i=1;i<=len;i++){
			str1="0"+str1;
		}
	}
	int tmp,cf=0;
	int len=str1.length();
	for(int i=len-1;i>=0;i--){
		tmp=str1[i]-'0'+str2[i]-'0'+cf;
		cf=tmp/10;
		tmp=tmp%10;
		str=char(tmp+'0')+str;
	}
	if(cf>0){
		str=char(cf+'0')+str;
	}
	return str;
}






int main(){
	string str1,str2;
	cin>>str1>>str2;
	cout<<multi(str1,str2)<<endl;;
	return 0;
}
