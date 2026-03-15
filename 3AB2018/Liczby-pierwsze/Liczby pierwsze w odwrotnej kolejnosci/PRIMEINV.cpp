#include<bits/stdc++.h>
using namespace std;
int a,b,wyn,i;
vector <int> odp;
bool pierw(int n){
	if(n<2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
cin>>a;
int liczb=2;
while(a>i){
	if(pierw(liczb)==true){
		odp.push_back(liczb);
		i++;
	}
	liczb++;
}
  for(int i=odp.size()-1;i>=0;i--){
  	cout<<odp[i]<<" ";
  }
}