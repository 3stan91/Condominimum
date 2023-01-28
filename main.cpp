#include <iostream>
#include <string>

int main() {

    std::cout << "Input owner's last name of apartments\n";
    std::cout << "--------------------------------------" << std::endl;
    int n = 10;
    std::string lastName[n];

    for (int i = 0; i < n; i++) {
        std::cout << "A last name " << i + 1 << " of owner\n";
        std::getline(std::cin, lastName[i]);
    }
    int apartmentNumber;

    for (int i = 0; i < n; i++) {
        std::cout << "Input # of apartment\n";
        std::cin >> apartmentNumber;
        if (apartmentNumber < 1 || apartmentNumber > n) {
            std::cout << "Error. Invalid # of apartment\n";
            return 1;
        }
        std::cout << lastName[apartmentNumber - 1] << std::endl;
    }
    return 0;
}