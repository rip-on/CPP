#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout<< "Please enter your full name: ";
    std::getline(std::cin, name);

    std::cout<< "What's your age: ";
    std::cin>> age;


    std::cout << "Hello " << name << "\n";
    std::cout << "You're " << age << " years old";

    return 0;


}