#include<iostream>
#include<math.h>

int main()
{
    int a,b,c;
    std::cout << "Enter the side A: \n";
    std::cin >> a;

    std::cout << "Enter the side B: \n";
    std::cin >> b;

    a = pow(a,2);
    b = pow(b,2);

    c = sqrt(a + b);

    std::cout << "The hypotenous of the right triangle is: " << c << "\n";

    return 0;

}
