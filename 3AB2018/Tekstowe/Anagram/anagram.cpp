#include<bits/stdc++.h>
using namespace std;
int p,k,u,tab[10005];
string s,d,o;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>s>>p;
    sort(s.begin(),s.end());
    for(int r=1;r<=p;r++){
    	k=2;
    	cin>>d;
    	if(d.size()==s.size()){
    		o=d;
    	sort(d.begin(),d.end());
    	for(int i=0;i<s.size();i++){
    		if(s[i]!=d[i]){
    			k = 1;
			}
		}
		if(k==2){
			cout<<o<<"\n";
		} 
		}
		o.clear();
		d.clear();
	}
    	
}