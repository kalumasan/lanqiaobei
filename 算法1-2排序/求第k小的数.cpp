#include<bits/stdc++.h>

using namespace std;
//int a[5000005],k;
//
//void qsort(int l,int r){
//	int i=l,j=r,mid=a[(l+r)/2];
//	
//	do{
//		while(a[i]<mid)i++;
//		while(a[j]>mid)j--;
//		if(i<=j){
//			swap(a[i],a[j]);
//			i++;
//			j--;
//		}
//	}while(i<=j);
//	if(k<=j) qsort(l,j);
//	else if(k>=i) qsort(i,r);
//	else{
//		cout<<a[j+1]<<endl;//因为题目说明了该数组中的元素个数为奇数，所以这里可以这么写； 
//		
//	}
//}
//
//int main(){
//	int n;
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	} 
//	qsort(0,n-1);
//	return 0;
//}

//int main(){
//	int a[10];
//	int n,k;
//	scanf("%d%d",&n,&k);
//	for(int i=0;i<n;i++){
//		scanf("%d",a+i);
//	} 
//	sort(a,a+n);
//	cout<<a[k]<<endl;
//	return 0;
//}

int x[5000005],k;
int main()
{
	int n;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&x[i]);
	nth_element(x,x+k,x+n);//简短又高效
	printf("%d",x[k]);
}
