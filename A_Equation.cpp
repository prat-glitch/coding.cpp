#include <iostream>

bool isComposite(int n) {
    if (n <= 3) return false; // 1, 2, and 3 are not composite
    if (n % 2 == 0) return true; // even numbers are composite
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return true; // found a divisor, so it's composite
    }
    return false; // no divisors found, so it's prime
}

int main() {
    int n;
    std::cin >> n;

    int a = n + 2; // start from n + 2, which is guaranteed to be composite
    while (!isComposite(a)) {
        a += 2; // increment by 2 to find the next composite number
    }

    int b = a - n;

    std::cout << a << " " << b << std::endl;

    return 0;
}