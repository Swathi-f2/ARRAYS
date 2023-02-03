// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
		long subarray(vector<int>v,int n,int k){
			long i=0,j=0,maxi=INT_MIN,sum=0;
			while(j<n){
				sum+=v[j];
				if((j-i)+1<k){
					j++;
				}
				else if((j-i)+1==k){
					maxi=max(maxi,sum);
					sum-=v[i];
					i++;
					j++;
				}
			}
			return maxi;
//       long sum=0;
//          for(int i=0;i<K;i++){
//              sum+=Arr[i];
//          }
//          long cur_sum=sum;
//          for(int i=K;i<N;i++){
//              cur_sum+=Arr[i]-Arr[i-K];
//              sum=max(sum,cur_sum);
//          }
//          return sum;
		}
};
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		Solution ob;
		cout<<ob.subarray(v,n,k)<<endl;
	}
	return 0;
}
