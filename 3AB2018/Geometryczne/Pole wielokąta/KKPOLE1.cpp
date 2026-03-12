#include<bits/stdc++.h>
using namespace std;

int lW;

struct Punkt {
    double x, y;
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin >> lW;
    
    vector<Punkt> wierz(lW);
    for (int i = 0; i < lW; i++) {
        cin >> wierz[i].x >> wierz[i].y;
    }
    
    double suma = 0;
    for (int i = 0; i < lW; i++) {
        int nastepny = (i + 1) % lW;
        suma += wierz[i].x * wierz[nastepny].y - wierz[nastepny].x * wierz[i].y;
    }
    
    double pole = fabs(suma) / 2.0;
    cout << fixed << setprecision(5) << pole << "\n";

}