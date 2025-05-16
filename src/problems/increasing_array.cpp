#include <iostream>
#include <vector>

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    long long moves = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            moves += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }

    std::cout << moves << std::endl;
    return 0;
}
