#include <iostream>
#include <string>

int main() {
    try {
        std::string S;
        std::cin >> S;
        int result = std::stoi(S); // std::string to int 
        std::cout << result << std::endl;
    }  catch (...) { // catch all exceptions
        std::cerr << "Bad String" << std::endl;
    }
    return 0;
}
