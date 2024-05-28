#include <bits/stdc++.h>
using namespace std;

int dapan(string s1, string s2)
{
    bool ok = 1;
    int ans = 0, n=s1.length()-1, d = n-1;
    while (ok)
    {
        while (s1[d] < s1[d+1]) d--;
        if (d < 0)
        {
            for (int i=1; i<=s1.length(); i++) s1[i] = i;
        }
        else 
        {
            int k = n;
            while (s1[d] < s1[k]) k--;
            swap(s1[k], s1[d]);
            int l = d+1, r = n;
            while (l < r)
            {
                swap(s1[l], s1[r]);
                l++; r--;
            }
        }
        ans++;
        if (s1 == s2) ok = 0;
    }
    return ans;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s, s1="",s2="";
        int n; cin >> n;
        for (int i=1; i<=n; i++) 
        {
            cin >> s;
            s1 = s1 + s;
        }
        for (int i=1; i<=n; i++) 
        {
            cin >> s;
            s2 = s2 + s;
        }
        cout << dapan(s1,s2) << endl;
    }
    return 0;
}