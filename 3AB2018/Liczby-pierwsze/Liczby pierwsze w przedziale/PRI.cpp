#include<bits/stdc++.h>
using namespace std;
int a,b,wyn;

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
cin>>a>>b;
for(int i=a;i<=b;i++){
	if(pierw(i)==true) wyn++;
  }
  cout<<wyn;
}