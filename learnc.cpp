#include <iostream>

int main() {
    char names[5][20] = {
        "Andi",
        "Joko",
        "Budi",
        "Citra",
        "Yanti"
    };

    std::cout << "Nama dengan nomor urut absen 3 : " << names[2] << std::endl;

    return 0;
}