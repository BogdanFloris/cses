#include <iostream>
#include <sys/types.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    u_int64_t n;
    std::cin >> n;

    while (n != 1) {
        std::cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    std::cout << 1 << std::endl;

    return 0;
}
