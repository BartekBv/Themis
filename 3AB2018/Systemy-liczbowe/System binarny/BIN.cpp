#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
string s;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	int u=n;
	while(u!=0){
		if(u%2==0){
			s.push_back('0');
			u/=2;
		}else{
			s.push_back('1');
			u/=2;
		}
	}
	reverse(s.begin(),s.end());
	cout<<s;
	
	
		
}