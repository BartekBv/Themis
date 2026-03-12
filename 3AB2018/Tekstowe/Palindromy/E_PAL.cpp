#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;


string f(string s) {
    unordered_map<char, int> litery;
    for (int i = 0; i < s.length(); i++) {
        litery[s[i]]++;
    }
    string pol = ""; 
    char niep = '\0'; 
    int nieplicz = 0;

    for (pair<char, int> litera : litery) {
        char c = litera.first;
        int l = litera.second;
        if (l % 2 != 0) {
            nieplicz++;
            niep = c;
            if (nieplicz > 1) {
                return "-1"; 
            }
        }
        for (int i = 0; i < l / 2; i++) {
            pol += c;
        }
    }
    sort(pol.begin(), pol.end());
    string pal = pol;
    if (niep != '\0') {
        pal += niep;
    }
    reverse(pol.begin(), pol.end());
    pal += pol;
    return pal;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << f(s) << endl;
    }
    return 0;
}