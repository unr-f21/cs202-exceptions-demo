#include <iostream>



int main() {
    int number;
    std::cout << "Enter a number greater than 0:";
    std::cin >> number;
    try {
        if (number < 1) {
            throw "I said enter a number greater than 0";
        }
        std::cout << "You entered " << number << std::endl;
    }
    catch(const char* exception) {
        if(strcmp("I said enter a number greater  than 0","I said enter a number greater than 0") == 0){
            std::cout << "Bad number entered. Bye" << std::endl;
            exit(1);
        }
    }
    return 0;
}
