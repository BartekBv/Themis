#include<bits/stdc++.h>
using namespace std;
#define pkt pair<long long, long long>


long long iloczyn(pkt x, pkt y, pkt z){
	long long x1 = z.first - x.first, y1 = z.second - x.second, x2 = y.first - x.first, y2 = y.second - x.second;
	return x1*y2 - x2*y1;
}

bool sprawdz(pkt x, pkt y, pkt z){
	if(min(x.first, y.first) <= z.first and z.first <= max(x.first, y.first) and min(x.second,y.second)<=z.second and z.second <= max(x.second, y.second)) return true;
	else return false;
}

bool przecin(pkt a, pkt b, pkt c, pkt d){
	long long v1 = iloczyn(c,d,a), v2=iloczyn(c,d,b), v3=iloczyn(a,b,c), v4=iloczyn(a,b,d);
	
	if((v1>0 and v2<0 or v1<0 and v2>0) and(v3>0 and v4<0 or v3<0 and v4>0)) return 1;
	if(v1==0 and sprawdz(c,d,a)) return 1;
	if(v2==0 and sprawdz(c,d,b)) return 1;
	if(v3==0 and sprawdz(a,b,c)) return 1;
	if(v4==0 and sprawdz(a,b,d)) return 1;
	
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    pkt f,g,h,j;
    long long q;
    cin>>q;
    while(q--){
	
    cin>>f.first>>f.second>>g.first>>g.second>>h.first>>h.second>>j.first>>j.second;
    if(przecin(f,g,h,j)) cout<<"TAK\n";
    else cout<<"NIE\n";
}
}