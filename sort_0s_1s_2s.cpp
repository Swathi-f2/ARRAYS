//Dutch national flag algorithm
//two pointer approach
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
		void sort(vector<int>&v,int n){
			int l=0,h=n-1,m=0;
			while(m<=h){
				if(v[m]<1)
				swap(v[m++],v[l++]);
				else if(v[m]>1)
				swap(v[m],v[h--]);
				else 
				m++;
			}
		}
};

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		Solution ob;
		ob.sort(v,n);
		for(int i:v)
		cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}
