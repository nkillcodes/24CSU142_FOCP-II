#include <iostream>
using namespace std;
bool is_prime(int);
void next_prime(int);
int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;

    if (is_prime(n)) {
        cout << n << " is a prime number" << endl;
        next_prime(n);
    } else {
        cout << n << " is not a prime number" << endl;
        cout << "divisors of " << n << ": ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void next_prime(int n) {
    int next = n + 1;
    while (!is_prime(next)) {
        next++;
    }
    cout << "the next prime number after " << n << " is " << next << endl;
}
