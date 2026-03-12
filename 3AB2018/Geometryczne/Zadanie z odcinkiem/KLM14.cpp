#include<iostream>
#include<numeric>
using namespace std;

int main(){

    long long x1, y1, z1;
    long long x2, y2, z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    long long rX = abs(x2 - x1);
    long long rY = abs(y2 - y1);
    long long rZ = abs(z2 - z1);
    long long NWD = std::gcd(rX, std::gcd(rY, rZ));
    
    cout << NWD + 1 << "\n";
}