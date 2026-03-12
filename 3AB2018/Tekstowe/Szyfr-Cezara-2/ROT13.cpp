#include<bits/stdc++.h>
using namespace std;
const int SIZE=1005;
const int mini=1000000;
string s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    
    	cin>>s;
    	
    	for(int i=0;i<s.size();i++){
    		if(int(s[i])>109){
    			cout<<char(int(s[i])-13);
			}
         else cout<<char(int(s[i])+13);
		}
		cout<<"\n";
	
	return 0;
}