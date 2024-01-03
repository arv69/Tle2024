// Problem: F. Digits Summation
// Contest: Codeforces - Sheet #1 (Data type - Conditions)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
// Memory Limit: 64 MB
// Time Limit: 250 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int x=a[a.size()-1]-'0';
	int y=b[b.size()-1]-'0';
	cout<<x+y<<endl;
}

// 51-48= 3; ascaii value of 0 is 48;
// 50-48=2
