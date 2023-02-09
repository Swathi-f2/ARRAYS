//using right shifting
#include <bits/stdc++.h>
using namespace std;
 class Solution{
 	public:
 		void sort(vector<int>&a,int n){
 			for(int i=0;i<n;i++){
 				int temp=a[i];
 				if(temp<0){
 					int j=i-1;
 					while(j>=0 && a[j]>0){
 						a[j+1]=a[j];
 						j--;
 					}
 					a[j+1]=temp;
 				}
 			}
 		}
 };
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
