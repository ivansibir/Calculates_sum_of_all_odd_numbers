#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Enter a positive integer: ";

    unsigned int maxNumber;

    while (!(std::cin >> maxNumber) || std::cin.peek() != '\n' || maxNumber <= 0)
    {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    unsigned long long sum = 0;

    for (unsigned int i = 1; i <= maxNumber; i += 2)
    {
        sum += i;
    }

    std::cout << "Sum of all odd numbers: " << sum << std::endl;

    return 0;
}