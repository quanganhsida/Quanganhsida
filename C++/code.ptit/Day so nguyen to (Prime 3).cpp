#include<iostream>
using namespace std;

int songuyento(int n) {
	if (n < 2) {
		return 0;
	}
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

main() {
	int n, i, t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 2; i <= n; i++) {
			if (songuyento(i) == 1) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	//return 0;
}