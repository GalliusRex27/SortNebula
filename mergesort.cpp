#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int brr[], int l, int m, int r) 
{  
    int o=m-l+1; 
    int p=r-m; 
    int A[o],B[p],C[o],D[p];
    for (int i=0;i<o;i++) {
        A[i]=arr[l+i]; 
        C[i]=brr[l+i];}
    for (int j=0;j<p;j++){
        B[j]=arr[m+1+j];
        D[j]=brr[m+1+j];}
    int i=0,j=0,k=l;
    while (i<o&&j<p) 
{   if(A[i]<=B[j]) 
    { 
        arr[k]=A[i];
        brr[k]=C[i];
	    i++; 
    } 
        else
    { 
	    arr[k]=B[j];
		brr[k]=D[j]; 
        j++; 
    } 
    k++; 
} 
    while (i<o) 
{ 
        arr[k]=A[i];
		brr[k]=C[i]; 
        i++; 
        k++; 
} 
    while (j<p) 
{ 
        arr[k]=B[j];
		brr[k]=D[j]; 
        j++; 
        k++; 
} 
} 
void mergeSort(int arr[],int brr[],int l,int r) 
{ 
    if (l<r) {
    int e =l+(r-l)/2; 
    mergeSort(arr,brr,l,e); 
    mergeSort(arr,brr,e+1,r); 
    merge(arr,brr,l,e,r); 
} }
int main(){
	cout<<"Enter the number of pairs";
	int n; cin>>n;
	cout<<"Enter the pairs";
	int A[20],B[20];
	for(int i=0;i<n;i++){
		cin>>A[i];
		cin>>B[i];
	}
	mergeSort(A,B,0,n-1);
    vector< pair<int,int> >vector1;
	for(int i=0;i<n;i++){
		vector1.push_back(make_pair(A[i],B[i]));
	}
	cout<<"The sorted pairs, by mergesort, are "<<endl;
	for(int i=0;i<n;i++){
		cout<<vector1[i].first<<" "<<vector1[i].second<<endl;
	}
	return 0;
}

