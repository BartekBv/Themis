#include <bits/stdc++.h>
using namespace std;


double F(double x, const vector<double> c) {
    double r = c[0];
    int sz = c.size();
    for (int i = 1; i < sz; i++) {
        r = r * x + c[i];
    }
    return r * x; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<double> p(n);
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    
    
    vector<double> c(n);
    for (int i = 0; i < n; i++){
        c[i] = p[i] / (n - i);
    }
    
    cout << fixed << setprecision(3);
    
    for (int i = 0; i < m; i++){
        double a, b;
        cin >> a >> b;
        cout << F(b, c) - F(a, c) << "\n";
    }
    
    return 0;
}