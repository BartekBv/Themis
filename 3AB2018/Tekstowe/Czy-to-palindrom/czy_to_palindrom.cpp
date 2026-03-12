#include<iostream>
using namespace std;
const int SIZE=1005;
const int mini=1000000;
int p,k,u;
string s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>p;
    for(int y=0;y<p;y++){
    	cin>>k>>s;
    	u=0;
    	for(int i=0;i<s.size()-1;i++){
    		if(s[i]!=s[s.size()-1-i]){
    			cout<<"NIE\n";
    			u=1;
    			break;
			}
		}if(u==0) cout<<"TAK\n";
	}
    	
    	
    	
	
	return 0;
}