#include <bits/stdc++.h>
#include<vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        if (n == 1 || s[0] != s[n-1]) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
