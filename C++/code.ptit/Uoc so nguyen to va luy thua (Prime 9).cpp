#include<iostream>
using namespace std;

int main() {
	int t, n, d, i;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 2; i <= n; i++) {
			d = 0;
			while (n % i == 0) {
				n /= i;
				d++;
			}
			if (d) {
				cout << i;
				if (d > 1) {
					cout << "^" << d;
				}
				if (n > i) {
					cout << "*";
				}
			}
		}
		cout << endl;
	}
	return 0;
}