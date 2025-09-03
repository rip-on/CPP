#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "what's your age? ";
    std::cin >> age;

    std::cout << "What's your full name?";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Welcome " << name << "\n";
    std::cout << "Your age is " << age;

    return 0;

}