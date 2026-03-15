#include<bits/stdc++.h>
using namespace std;
int tab[1005][1005];
int n,a,z=1000000,olo,druga;
pair <int,vector<int> > para[1005];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a;
    		para[j].second.push_back(a);
    		para[j].first+=a;
		} 
	}
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n;i++){
		if(para[i].first<z){
			z=para[i].first;
			olo=i;
		} 
	}
	
	for(int k=0;k<n;k++) tab[k][druga]=para[olo].second[k];
	druga++;
	para[olo].first=1000006;
	z=1000006;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<tab[i][j]<<" ";
		cout<<"\n";
	}

}