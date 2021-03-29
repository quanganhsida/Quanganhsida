#include<iostream>
using namespace std;

//str1 is smaller than str2
bool smaller(string str1, string str2) {
    int n1 = str1.length(), n2 = str2.length();
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
    for (int i = 0; i < n1; i++) {
        if (str1[i] < str2[i])
            return true;
        else if (str2[i] < str1[i])
            return false;
        return false;
    }
}

//str1 > str2
//str = str1 - str2
string minusnumber(string str1, string str2) {
    if (smaller(str1, str2))
        swap(str1, str2);
    int n1 = str1.length(), n2 = str2.length();
    string str = "";
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i = 0; i < n2; i++) {
        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);
        if (sub < 0) {
            sub += 10;
            carry = 1;
        }
        else carry = 0;
        str.push_back(sub + '0');
    }
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);
        if (sub < 0) {
            sub += 10;
            carry = 1;
        }
        else carry = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    return str;
}

//layout
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << minusnumber(a, b) << endl;
    }
    return 0;
}
