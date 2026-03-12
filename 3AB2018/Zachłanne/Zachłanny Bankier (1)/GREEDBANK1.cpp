#include<bits/stdc++.h>
using namespace std;
int y,u;
int tab[100],l=6;
vector<int> wiktor;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>y;
	tab[0]=1;
	tab[1]=2;
	tab[2]=5;
	tab[3]=10;
	tab[4]=20;
	tab[5]=50;
	tab[6]=100;
	while(y!=0){
		if(y-tab[l]>=0){
			wiktor.push_back(tab[l]);
		u++;
		y-=tab[l];
		}
		if(y-tab[l]<0) l--;
	}
	
	for(int i=0;i<u;i++){
		cout<<wiktor[i]<<" ";
	}
}