#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	
	int chest=0;
	int biceps=0;
	int back=0;
	for(int i=0;i<n;i++){
		if(i%3==0)
		chest+=arr[i];
		else if(i%3==1)
		biceps+=arr[i];
		else if(i%3==2)
		back+=arr[i];
	}
	if(chest>biceps && chest>back)
	cout<<"chest\n";
	else if(chest<biceps && biceps>back)
	cout<<"biceps\n";
	else
	cout<<"back\n";
	
}
