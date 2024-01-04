// Problem: D. Range Sum
// Contest: Codeforces - Contest #2
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD=1e9+7;
const int INF=LLONG_MAX/2;
signed main(){
   ios::sync_with_stdio(false);cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
int l,r;
cin>>l>>r;
if(l>r){
	swap(l,r);
}
int right=r*(r+1)/2;
int left=l*(l-1)/2;
cout<<right-left<<endl;
      
 }
return 0;
}
