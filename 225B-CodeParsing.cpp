#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int countX=0;
	int countY=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='x')
		countX++;
		else
		countY++;
	}
	
	if(countX>countY){
		for(int i=0;i<countX-countY;i++){
			cout<<"x";
		}
		cout<<"\n";
	}
	else 
	{
		for(int i=0;i<countY-countX;i++){
			cout<<"y";
		}
		cout<<"\n";
	}
}
