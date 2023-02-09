//two pointer approach
#include <bits/stdc++.h>
using namespace std;
 class Solution{
 	public:
 		void sort(vector<int>&a,int n){
			int i=0,j=n-1;
			while(i<j){
				if(a[i]<0 && a[j]<0)
				i++;
				else if(a[i]<0 && a[j]>0){
					i++;
					j--;- 
				}
				else if(a[i]>0 && a[j]>0)
				j--;
				else  
				swap(a[i],a[j]);
			}
		}
 };
//partition algorithm quicksort
// class Solution{
//  	public:
//  		void sort(vector<int>&a,int n){
// 			 int i=0,j=n-1,pivot=0;
// 			 while(i<j){
// 			 	if(a[i]<pivot)i++;
// 			 	else if(a[j]>pivot)j--;
// 			 	else swap(a[i],a[j]);
// 			 }
// 			}
//  };
int main() {
	 int t;cin>>t;
	 while(t--){
	 	vector<int>v1;
	 	int n;cin>>n;
	 	vector<int>v;
	 	for(int i=0;i<n;i++){
	 		int x;
	 	cin>>x;
	 	v.push_back(x);
	 	}
	 	Solution ob;
	 	ob.sort(v,n);
	 	for(int i=0;i<n;i++)
	 		cout<<v[i]<<" ";
	 	cout<<endl;
	 }
	return 0;
}
