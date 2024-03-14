#include <iostream>

int main() {
    int n, i, j, space;

    std::cout << "Enter the number of rows (odd number): ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Number of rows should be odd. Please try again." << std::endl;
        return 0;
    }

    space = n / 2;

    // Upper half of the diamond
    for (i = 1; i <= n; i += 2) {
        for (j = 1; j <= space; j++)
            std::cout << " ";

        space--;

        for (j = 1; j <= i; j++)
            std::cout << "*";

        std::cout << std::endl;
    }

    space = 1;

    // Lower half of the diamond
    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 1; j <= space; j++)
            std::cout << " ";

        space++;

        for (j = 1; j <= i; j++)
            std::cout << "*";

        std::cout << std::endl;
    }

    return 0;
}
