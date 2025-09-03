#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "Enter your full name: ";
    std::cin >> name;

    std:: cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << "years old";
    
    return 0;
}