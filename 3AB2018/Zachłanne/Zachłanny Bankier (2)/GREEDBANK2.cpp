#include<bits/stdc++.h>
using namespace std;
int y,u;
int tab[100],l;
vector<int> wiktor;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>l;
	for(int i=1;i<=l;i++){
		cin>>tab[i];
	}
	l=1;
	cin>>y;
	while(y!=0){
		if(y-tab[l]>=0){
			wiktor.push_back(tab[l]);
		u++;
		y-=tab[l];
		}
		if(y-tab[l]<0) l++;
	}
	
	for(int i=0;i<u;i++){
		cout<<wiktor[i]<<" ";
	}
}