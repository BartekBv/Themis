#include <bits/stdc++.h>

using namespace std;

string s;
 int a,b;
 int tab[1000005];

int main()
{
cin>>a;
while(a--){
	cin>>s;
	b=-1;
	tab[0]=b;
	for(int i=1;i<=s.size();i++){
		while(b>-1 and s[b]!=s[i-1]){
			b=tab[b];
		}
		b++;
		tab[i]=b;
		cout<<b<<" ";
	}
	cout<<"\n";
	for(int j=0;j<=s.size();j++) tab[j]=0;
}



 
} 