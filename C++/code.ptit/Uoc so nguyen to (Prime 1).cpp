#include<iostream>
using namespace std;

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		i = 2;
		cin >> n;
		while (n > 1 && i <= sqrt(n)) {
			if (n % i == 0) {
				cout << i << " ";
				n /= i;
			}
			else i++;
		}
		if (n > 2) {
			cout << n;
		}
		cout << endl;
	}
	return 0;
}