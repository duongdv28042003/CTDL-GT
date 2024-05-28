#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string bin = "";
        bin += s[0];
        for (int i=1; i<s.length(); i++) {
            if (s[i] == bin[i-1]) bin += "0";
            else bin += "1";
        }
        cout << bin << endl;
    }
    return 0;
}