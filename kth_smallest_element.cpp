// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int kthsmallest(int arr[],int n,int k){
		priority_queue<int>p;
		for(int i=0;i<k;i++)
			p.push(arr[i]);
		for(int j=k;j<n;j++){
			if(arr[j]<p.top()){
				p.pop();
				p.push(arr[j]);
			}
		}
		return p.top();
	}
};
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int k;cin>>k;
		Solution ob;
		cout<<ob.kthsmallest(arr,n,k)<<endl;
	}
	return 0;
}
