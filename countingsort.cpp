#include<bits/stdc++.h>
using namespace std;
int findmax(int arr[],int n) {
   int max=arr[1];
   for(int i=2; i<=n; i++) {
      if(arr[i]>max)
         max = arr[i];
   }
   return max; 
}
void countSort(int arr[], int n) {
   int A[n+1];
   int max = findmax(arr, n);
   int freq[max+1];     
   memset(freq,0,sizeof(freq));
   for(int i=1;i<=n;i++){
   freq[arr[i]]++; }
	for(int i=1;i<max+1;i++){
      freq[i]+=freq[i-1];} 
   for(int i=n;i>=1; i--) {
      A[freq[arr[i]]] = arr[i];
      freq[arr[i]] -= 1; 
    }
   for(int i=1;i<=n; i++) {
      arr[i] = A[i];
   }
}
int main(){
		cout<<"Enter the number of pairs";
	int n; cin>>n;
	cout<<"Enter the pairs";
	int A[2][20];
	for(int i=1;i<n+1;i++){
		cin>>A[0][i];
		cin>>A[1][i];
	}
	countSort(A[0],n);
 vector< pair<int,int> >vector1;
	for(int i=1;i<n+1;i++){
		vector1.push_back(make_pair(A[0][i],A[1][i]));
	}
	cout<<"The sorted pairs, by countingsort, are "<<endl;
	for(int i=0;i<n;i++){
		cout<<vector1[i].first<<" "<<vector1[i].second<<endl;
	}
	return 0;
}
