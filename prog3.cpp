#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int number : numbers) {
        if (number == 6) {
            std::cout << "Number int 5 : " << number << std::endl;
            
            break;
        }
    }

    return 0;
}