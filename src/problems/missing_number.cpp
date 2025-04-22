#include <iostream>
#include <sys/types.h>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    u_int64_t n;
    std::cin >> n;

    u_int64_t sum = n * (n + 1) / 2;

    std::vector<u_int64_t> numbers(n);
    for (u_int64_t i = 0; i < n - 1; ++i) {
        std::cin >> numbers[i];
        sum -= numbers[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
