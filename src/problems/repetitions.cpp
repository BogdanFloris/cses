#include <algorithm>
#include <iostream>
#include <sys/types.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;

    char last_char = s[0];
    int max_length = 1;
    int curr_length = 1;
    for (size_t i = 1; i <= s.length(); i++) {
        if (s[i] == last_char) {
            curr_length += 1;
        } else {
            max_length = std::max(max_length, curr_length);
            last_char = s[i];
            curr_length = 1;
        }
    }
    std::cout << max_length << std::endl;

    return 0;
}
