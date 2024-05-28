#include <bits/stdc++.h>
using namespace std;
void biendoi( int n) {
	int a[20];
	int k=1;
	while (n>0) {
		a[k] = n % 2 ;
		k++; n/=2;
	} k--;
	int l=1, r = k;
	while (l < r) {
		swap(a[l], a[r]);
		l++; r--;
	}
	int b[k]; b[1] = a[1];
	for (int i=2; i<=k; i++) {
		if (a[i] == a[i-1]) b[i] = 0;
		else b[i] = 1;
	}
	int s = 0;
	for (int i=1; i<=k; i++) s = s + b[i] * pow(2, k-i);
	cout << s << endl;
	return;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		biendoi(n);
	}
	return 0;
}