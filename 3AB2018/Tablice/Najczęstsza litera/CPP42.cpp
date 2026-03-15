#include<bits/stdc++.h>
using namespace std;
int n,naj;
string s;
int  tab[1000005];
int main(){
	ios::sync_with_stdio();
	cin.tie(0);
	cin>>n>>s;
	for(int i=0;i<n;i++){
		tab[s[i]]++;
	}
//	for(int i=0;i<n;i++){
//	cout<<tab[s[i]]<<" "<<(char)s[i]<<" ";
//	}
	for(int i=0;i<n;i++){
		if(naj<tab[s[i]]) naj=tab[s[i]];
	}
	for(int i=0;i<n;i++){
		if(tab[s[i]]==naj){
			cout<<tab[s[i]]<<" "<<(char)s[i];
			return 0;
		}
	}
	
	
	
//	cout<<tab[n-1]<<" "<<(char)tab[n-1];
}