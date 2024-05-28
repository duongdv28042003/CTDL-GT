#include <bits/stdc++.h>
using namespace std;
void gray(string s)
{
    string a="";
    a += s[0];
    for (int i=1; i<s.length(); i++) 
    {
        if (s[i] == s[i-1]) a += '0';
        else a += '1';
    }
    cout << a << endl;
}
int main()
{
    
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        gray(s);
    }
    return 0;
}