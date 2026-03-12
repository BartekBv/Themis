#include<bits/stdc++.h>
using namespace std;

int main() {
	
    int xj, yj, xd, yd, xt, yt;
    cin >> xj >> yj >> xd >> yd >> xt >> yt;
    
    double pole = 0.5 * abs(xj * (yd - yt) + xd * (yt - yj) + xt * (yj - yd));
    
    cout << fixed << setprecision(1) << pole << "\n";
    
    return 0;
}