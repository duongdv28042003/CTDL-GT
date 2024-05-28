#include <bits/stdc++.h>
using namespace std;

long long bin_to_dec(string s)
{
    int d = 0;
    long long res = 0;
    for (int i=s.length()-1; i>=0; i--)
    {
        res = res + (s[i] - 48) * pow(2,d);
        d++;
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1, s2; cin >> s1 >> s2 ;
        cout << bin_to_dec(s1) * bin_to_dec(s2)  << endl; 
    }
    return 0;
}