#include<iostream>
using namespace std;

int uocso(int n) {
	int d, i;
	d = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			d++;
		}
	}
	return d;
}

int main() {
	int t, n, j;
	cin >> t;
	while (t--) {
		cin >> n;
		for (j = 1; j < n; j++) {
			if (uocso(j) == 3) {
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
