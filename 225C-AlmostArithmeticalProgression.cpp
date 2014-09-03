#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int x;
	cin>>n;
	vector<int> arr(n+2);
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	
	int DP[n+2][n+2];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			DP[i][j]=0;
		}
	}
	

	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=0,x=0;j<i;j++){
			DP[j][i]=DP[x][j]+1;
			if(arr[j]==arr[i]) 
			x=j;
			ans=max(ans,DP[j][i]);
		}
	}

	cout<<ans<<"\n";
}

