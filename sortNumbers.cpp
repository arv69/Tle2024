// Problem: T. Sort Numbers
// Contest: Codeforces - Sheet #1 (Data type - Conditions)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
// Memory Limit: 256 MB
// Time Limit: 250 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int x=a,y=b,z=c;
	if(a>b){
		swap(a,b);
	}
	 if(b>c){
		swap(b,c);
		if(a>b)swap(a,b);
	}
	cout<<a<<endl<<b<<endl<<c<<endl<<endl;
	cout<<x<<endl<<y<<endl<<z<<endl;
	
}
