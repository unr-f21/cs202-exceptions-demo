#include <iostream>



int main() {
    int number;
    int divisor = 0;
    std::cout << "Enter a number greater than 0:";
    std::cin >> number;
    std::cout << "You entered " << number << std::endl;
    assert(divisor > 0);
    std::cout << divisor << std::endl;
    std::cout << number/ divisor << std::endl;
    return 0;
}
