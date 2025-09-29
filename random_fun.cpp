#include <iostream>
#include <ctime>

int main()
{
    //pseudo-random = NOT truly random (but close_);

    srand(time(NULL));

    int num = (rand() % 5)+1;

    std::cout << num;
    return 0;
}