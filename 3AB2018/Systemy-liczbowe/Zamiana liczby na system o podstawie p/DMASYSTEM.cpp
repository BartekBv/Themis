#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long a;  
    int p;        
    cin >> a >> p;
    if (a == 0) {
        cout << 0 << "\n";
        return 0;
    }
    vector<int> wyn; 
    while (a > 0) {
        wyn.push_back(a % p);  
        a /= p;  
    }
    for (int i = wyn.size() - 1; i >= 0; i--) {
        cout << wyn[i];
    }
    return 0;
}