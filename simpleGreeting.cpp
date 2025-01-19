// Simple Greeting project cit-66
// Alex Lopez
// 1/19/2025

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "! nice to meet you" << std::endl;

    return 0;
}
