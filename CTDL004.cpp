#include <bits/stdc++.h>
using namespace std;

void ketqua(string s) {
    int a = 0;
    for (int i=0; i<s.length(); i++)  {
        if (s[i] == '?') a++;
    }
    char bin[a];
    for (int i=0; i<a; i++) bin[i] = '0';
    string ss = s;
    bool ok = 1;
    while (ok) {
        int n=0, m=0;
        while (n < s.length()) {
            if (s[n] == '?')
            {
                ss[n] = bin[m];
                m++;
            } 
            n++;
            
        }
        cout << ss << endl;
        int k = a - 1;
        while (k >= 0 && bin[k] == '1')
        {
            bin[k] = '0'; k--;
        }
        if (k == -1 ) ok = 0;
        else bin[k] = '1';
        
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        ketqua(s);
    }
    return 0;
}