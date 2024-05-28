#include <bits/stdc++.h>
using namespace std;
int t,n,a[100], ok;
void sinh()
{
    int i=n-1;
    while (i>=1 && a[i] > a[i+1])
    {
        --i;
    }
    if (i==0) 
    {
        ok = 0; // cau hinh cuoi cung
    }
    else {
        int j = n;
        while (a[i] > a[j]) j--;
        swap (a[i], a[j]);
        int l=i+1, r=n;
        while (l<r)
        {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main()
{
    cin >> t;
    while (t--)
    {
        ok = 1;
        cin >> n;
        for (int i=1; i<=n; i++) a[i] = i;
        while (ok){
            for (int i=1; i<=n; i++) cout << a[i];
            cout << ' ';
            sinh();
        }
        cout << endl;
    }
    return 0;
}