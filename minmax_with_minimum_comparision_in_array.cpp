#include <bits/stdc++.h>
using namespace std;
void minmax(vector<int>v,int n){
	int mini,maxi,i;
	if(n%2==0){
		if(v[0]>v[1]){
			maxi=v[0];
			mini=v[1];
		}
		else{
			maxi=v[1];
			mini=v[0];
		}
		i=2;
	}
	else {
		mini=v[0];
		maxi=v[0];
		i=1;
	}
	while(i<n-1){
		if(v[i]>v[i+1]){
			if(v[i]>maxi)
				maxi=v[i];
			if(v[i+1]<mini)
				mini=v[i+1];
		}
		else{
			if(v[i+1]>maxi)
				maxi=v[i+1];
			if(v[i]<mini)
				mini=v[i];
		}
		i+=2;
			
		}
		cout<<mini<<" "<<maxi;
	return ;	
	}

int main() {
	int n;
	cin>>n;
	 vector<int>v(n);
	 for(int i=0;i<n;i++){
	 		cin>>v[i];
	 }
	 minmax(v,n);
	return 0;
}
