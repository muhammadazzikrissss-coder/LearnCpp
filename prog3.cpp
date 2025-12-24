#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names = {
        "Andi", "Budi", "citra"
    };

    for (const auto& n : names) {
        std::cout << n << std::endl;
    }
}