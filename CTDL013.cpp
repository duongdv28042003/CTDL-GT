#include <bits/stdc++.h>
using namespace std;

void khoitao( int a[], int n, int k)
{
    for (int i=1; i<=k; i++) a[i] = i;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        int a[n];
        khoitao(a, n, k);
        for (int i=1; i<=k; i++) cout << a[i];
        cout << " ";
        int i=k;
        while (i>0)
        {
            if (a[i] == n-k+i) i--;
            else 
            {
                a[i]++ ;
                for (int j=i+1; j<=k; ++j) a[j] = a[j-1] + 1;
                for (int j=1; j<=k; j++) cout << a[j];
                cout << " ";
                i=k;
            }
        }
        cout << endl;
    }
    return 0;
}