#include <iostream>

int main()
{
    int x = 5;
    std::cout << (x % 2? "ODD" : "EVEN") << "\n";//Is it odd? True : false;

    int y = 4;
    std::cout << ( y % 2 == 0 ? " Even" : "Odd"); //Is it even? true : false;
    return 0;
}