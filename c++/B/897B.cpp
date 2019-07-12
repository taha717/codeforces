#include <bits/stdc++.h>
using namespace std;

string tostr(int n) {
    stringstream o;
    string x;

    while (n > 0) {
        x += (n % 10 + '0');
        n /= 10;
    }

    reverse(x.begin(), x.end());
    return x;
}

int main() {
    string x, y;
    int p, k;
    cin >> k >> p;
    int a = 1;
    long long ans = 0;
    while (k--) {
        x = tostr(a++);
        y = x;
        reverse(x.begin(), x.end());
        y += x;
        unsigned long long sum = 0;
        reverse(y.begin(), y.end());
        for (int i = 0; i < y.size(); i++) {
            sum = (sum * 10) + (y[i] - '0');
        }
        ans = (ans + sum) % p;
        ans %= p;

    }
    cout << ans << endl;
    return 0;
}