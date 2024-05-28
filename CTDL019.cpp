#include <bits/stdc++.h>
using namespace std;

int timMin( int s[], int a, int b)
{
    int min = a;
    for (int i=a+1; i<=b; i++)
    {
        if (s[i] < min) min = i;
    }
    return min;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n]; 
        for (int i=0; i<n; i++) cin >> a[i];
        bool kt=true;
        for (int i=0; i<n-1; i++)
        {
            if (a[i] <= a[i+1]) kt = false;
        }
        if (kt == true ) 
        {
            for ( int i=n-1; i>=0; i--) cout << a[i] << " ";
            cout << endl;
        }
        else
        {
            int i=n-2;
            while (a[i] > a[i+1]) i--;
            for (int k=n-1; k>i; k--)
            {
                if (a[k] > a[i]) 
                {
                    swap(a[k], a[i]);
                    break;
                }
            }
            for (int k=0; k<=i; k++) cout << a[k] << ' ';
            for (int k=n-1; k>i; k--) cout << a[k] << ' ';
            cout << endl;
        }
    }
    return 0;
}