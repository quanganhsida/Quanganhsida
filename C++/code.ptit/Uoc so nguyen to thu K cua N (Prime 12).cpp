#include<iostream>
using namespace std;

void s() {
	int n, i, d, a, k;
	cin >> n >> k;
	a = 0;
	for (i = 2; i <= n; i++) {
		while (n % i == 0) {
			n /= i;
			a++;
			if (a == k) {
				cout << i;
			}
		}
	}
	if (a < k) {
		cout << "-1";
	}
	cout << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		s();
	}
	return 0;
}