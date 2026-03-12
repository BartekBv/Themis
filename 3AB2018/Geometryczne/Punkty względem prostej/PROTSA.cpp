#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    int na_prostej = 0, na_prawo = 0, na_lewo = 0;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        int wyznacznik = (x1 - x0) * (b - y0) - (y1 - y0) * (a - x0);

        if (wyznacznik == 0)
            na_prostej++;
        else if (wyznacznik > 0)
            na_lewo++;
        else
            na_prawo++;
    }

    cout <<"na prostej "<< na_prostej<<"\nna prawo "<< na_prawo << "\nna lewo " << na_lewo << "\n";

    return 0;
}