#include <iostream>

int main()
{
    //ternary operator ?: = replacement to an if/else statement 
    //condition ? experssion1 : expression2;
    int grade = 75;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail" <<"\n";

    // int age = 21; 
    // age > 16 ? std::cout << "You can apply" : std::cout << "You can't";

    int number = 9;
    number % 2 == 0? std::cout << "Even" : std::cout << "ODD\n";

    int x = 5;
    x % 2 == 1? std::cout << "ODD" : std::cout << "Even\n" << "\n";

    int num = 8;
    num % 2? std::cout << "ODD" : std::cout << "Even\n" "\n"; //0 even 1 odd

    bool hungry = true;
    hungry ? std::cout << "You can eat" : std::cout << "You are full\n";
}