#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int brr[],int l,int h){
	int i=l-1;
	int pivot=arr[h];
	for(int j=l;j<=h-1;j++){
		if(arr[j]<=pivot){
			i+=1;
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			temp=brr[j];
			brr[j]=brr[i];
			brr[i]=temp;
		}
	}
	int temp1=arr[i+1];
	arr[i+1]=arr[h];
	arr[h]=temp1;
		int temp=brr[i+1];
			brr[i+1]=brr[h];
			brr[h]=temp;
	return i+1;
}
void quicksort(int arr[],int brr[],int l,int h){
	if(l<h){
	int p=partition(arr,brr,l,h);	
	quicksort(arr,brr,l,p-1);
	quicksort(arr,brr,p+1,h);
}}
int main(){
	cout<<"Enter the number of pairs";
	int n; cin>>n;
	cout<<"Enter the pairs";
	int A[20],B[20];
	for(int i=0;i<n;i++){
		cin>>A[i];
		cin>>B[i];
	}
	quicksort(A,B,0,n-1);
	vector< pair<int,int> >vector1;
	for(int i=0;i<n;i++){
		vector1.push_back(make_pair(A[i],B[i]));
	}
	cout<<"The sorted pairs, by quicksort, are "<<endl;
	for(int i=0;i<n;i++){
		cout<<vector1[i].first<<" "<<vector1[i].second<<endl;
	}
	
	return 0;
}

