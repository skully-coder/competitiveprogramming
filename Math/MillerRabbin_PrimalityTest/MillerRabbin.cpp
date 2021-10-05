#include <bits/stdc++.h>

using ll = long long;
using namespace std;

bool isPrime(ll n);
bool checkComposite(ll a, ll n, int s, ll d);
ll binPower(ll a, ll n, ll c);

int main() {
    cout << "Enter number of test cases, followed by respective inputs: ";

    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        int n;
        cin >> n;

        if (isPrime(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

bool isPrime(ll n) {
    if (n < 2) return false;

    ll d = n - 1;
    int s = 0;

    while (d % 2 == 0) {
        d /= 2;
        s++;
    }

    for (ll a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a) return true;

        if (checkComposite(a, n, s, d)) return false;
    }

    return true;
}

bool checkComposite(ll a, ll n, int s, ll d) {
    ll x = binPower(a, d, n);

    if (x == 1 || x == n - 1) return false;

    for (int i = 1; i < s; i++) {
        x = (x * x) % n;

        if (x == n - 1) return false;
    }

    return true;
}

ll binPower(ll a, ll n, ll c) {
    ll res = 1;

    while (n > 0) {
        if (n % 2 == 1)
            res = (res * a) % c;

        n /= 2;
        a = (a * a) % c;
    }

    return res % c;
}
