#include <iostream>


bool makeDatabaseConnection(){
    //throw std::runtime_error("No database connection");
    return true;
}


int retrieveDivisorFromDatabase(){
    bool connection = makeDatabaseConnection();
    int divisor = 0; // for this demo, pretend that the 3 came from the db
    if(divisor <= 0)
        throw std::runtime_error("Data in database is invalid");
    return 0;
}


int main() {
    float number;
    std::cout << "Enter a number greater than 0:";
    std::cin >> number;
    std::cout << "You entered " << number << std::endl;
    try {
        int divisor = retrieveDivisorFromDatabase();
        int result = number / divisor;
        std::cout << "The result is " << result << std::endl;
    }
    catch(std::runtime_error &error){
        std::cout << error.what() << std::endl;
        std::cout << "Program Exiting" << std::endl;
        exit(1);
    }


    return 0;
}


