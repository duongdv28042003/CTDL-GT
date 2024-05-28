#include <bits/stdc++.h>

using namespace std;

int t,n,a[1000];

int noiday( int a[]) {
    long long s = 0;
    int i = 0;
    while (i < n-1) {
        a[i+1] = a[i+1] + a[i];
        s += a[i+1]; 
        sort(a,a + n);
        i++;
    }
    return s;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a,a + n);
        cout << noiday(a) << endl;
    }
    return 0;
}