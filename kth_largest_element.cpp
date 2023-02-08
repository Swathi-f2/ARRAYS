//https://leetcode.com/problems/kth-largest-element-in-an-array/description/
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int kthsmallest(int arr[],int n,int k){
  //using maxheap
		priority_queue<int>p;
		for(int i=0;i<n;i++)
			p.push(arr[i]);
		for(int j=0;j<k-1;j++){
				p.pop();
			}
		return p.top();
	}
};
//using minheap we have to pop n-k times
//priority_queue<int,vector<int>,greater<int>>p;
//or
priority_queue<int,vector<int>,greater<int>>p;
        int n=nums.size();
        for(int i=0;i<n;i++){
            p.push(nums[i]);
            if(p.size()>k)
            p.pop();
        } 
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
		cout<<ob.kthsmallest(arr,n,k)<<" ";
	}
	return 0;
}
