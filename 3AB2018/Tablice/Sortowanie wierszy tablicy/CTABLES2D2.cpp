#include<bits/stdc++.h>
using namespace std;

int n,a,z=1000000,olo;
pair <int,vector<int> > para[1005];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a;
    		para[i].second.push_back(a);
    		para[i].first+=a;
		} 
	}
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n;i++){
		if(para[i].first<z){
			z=para[i].first;
			olo=i;
		} 
	}
	for(int k=0;k<n;k++) cout<<para[olo].second[k]<<" ";
	cout<<"\n";
	para[olo].first=1000006;
	z=1000006;
	}
	

}