//PROBLEM LINK : http://codeforces.com/problemset/problem/22/D

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> segments;
	for(int i=0;i<n;i++){
		int start,end;
		cin>>start>>end;
		
		if(start>end)
		swap(start,end);
		
		segments.push_back(make_pair(start,end));
	}
	sort(segments.begin(),segments.end());
	
	int currentendpoint=segments[0].second;
	vector<int> nailPositions;
	
	for(int i=1;i<n;i++){
		if(segments[i].first > currentendpoint)
		{
			nailPositions.push_back(currentendpoint);
			currentendpoint=segments[i].second;
		}
			
		else{
			if(segments[i].second <=currentendpoint)
			{
				currentendpoint=segments[i].second;
			}
		}
		
	}
	nailPositions.push_back(currentendpoint);
	cout<<nailPositions.size()<<"\n";
	for(int i=0;i<nailPositions.size();i++){
		cout<<nailPositions[i]<<" ";
	}
	
	
}
