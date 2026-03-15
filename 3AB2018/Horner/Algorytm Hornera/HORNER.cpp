#include<bits/stdc++.h>
using namespace std;


int st, a;
double wsp[1005];
double argu;
double wyn;
int main()
{	
cout.setf(ios::fixed,ios::floatfield);
cout.precision(6);
	cin>>st>>a;
	
	for(int i=0;i<st;i++)
	{
		cin>>wsp[i];
	}
	while(a--){
	cin>>argu;
	wyn=wsp[0];
	for(int i=1;i<st;i++) wyn=wyn*argu + wsp[i];
	cout<<wyn<<"\n";	
}


	return 0;
}