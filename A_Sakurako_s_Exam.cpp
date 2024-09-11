#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        // The sum of all elements can be zero if the total sum of the array is even
        // We can achieve this by making the total sum (a + 2b) even
        if ((a + 2 * b) % 2 == 0 && (a > 0 || b == 0)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}