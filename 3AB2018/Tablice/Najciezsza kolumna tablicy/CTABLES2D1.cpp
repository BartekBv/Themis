#include<bits/stdc++.h>
using namespace std;

int n,a,b,wyn,c,o;
int tabik[1005];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
cin>>n;
for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
			cin>>c;
	 tabik[j]+=c;
	}

}
for(int i=1;i<=n;i++){
	if(tabik[i]>tabik[i-1]){
		if(o<tabik[i]){
			o=tabik[i];
			wyn=i-1;
		} 
		
	}if(o<tabik[i]) o=tabik[i];
	
}	
cout<<wyn;

return 0;
  }
