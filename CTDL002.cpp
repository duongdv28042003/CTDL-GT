#include <bits/stdc++.h>
using namespace std;
char a[100];
bool ok;
void sinh(string s, int d)
{
    while (ok)
    {
        string ss = "";
        int n = d - 1;
        while (a[n] == '1')
        {
            a[n] = '0'; n--;
        }
        if (n < 0) ok = 0;
        else
        {
            a[n] = '1';
            int k = 0;
            for (int i=0; i<s.length(); i++)
            {
                if (s[i] == '?') 
                {
                    ss += a[k]; k++;
                }
                else ss += s[i];
            }
            cout << ss << endl;
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int d = 0;
        string s; cin >> s;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i] == '?')
            {
                a[d] = '0'; d++;
            }
        }
        string ss = "";
        int k = 0;
        for (int i=0; i<s.length(); i++)
            {
                if (s[i] == '?') 
                {
                    ss += a[k]; k++;
                }
                else ss += s[i];
            }
        cout << ss << endl;
        ok = 1;
        sinh(s, d);
    }
    return 0;
}