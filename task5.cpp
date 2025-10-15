#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector<std::string> happyTickets;

    for (int number = 0; number <= 999999; ++number) {
        int n = number;
        int digits[6];

        for (int i = 5; i >= 0; --i) {
            digits[i] = n % 10;
            n /= 10;
        }

        int sumFirst = digits[0] + digits[1] + digits[2];
        int sumSecond = digits[3] + digits[4] + digits[5];

        if (sumFirst == sumSecond) {
            std::string ticket = "";
            for (int i = 0; i < 6; ++i)
                ticket += std::to_string(digits[i]);
            
            happyTickets.push_back(ticket);
        }
    }

    std::cout << "Знайдено " << happyTickets.size() << " щасливих квитків.\n";

    return 0;
}

