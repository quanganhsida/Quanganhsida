#include<cmath>
#include<iostream>
using namespace std;

main() {
    int i, t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        i = 2;
        while (n > 1 && i <= sqrt(n)) {
            if (n % i == 0) {
                n /= i;
            }
            else i++;
        }
        if (n > 2) cout << n;
        cout << endl;
    }
}
