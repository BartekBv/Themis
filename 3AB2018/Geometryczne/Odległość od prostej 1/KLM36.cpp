#include<bits/stdc++.h>
using namespace std;

int a, b, c,n;

double odl(int a, int b, int c, int x0, int y0) {
    return fabs(a * x0 + b * y0 + c) / sqrt(a * a + b * b);
}

int main() {
    
    cin >> a >> b >> c;
    cin >> n;
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        double dist = odl(a, b, c, x, y);
        if (dist == 0.0) {
            cout << "0.00" << "\n";
        } else {
            cout << dist << "\n";
        }
    }
}