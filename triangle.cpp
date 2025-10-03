#include <iostream>

int main()
{
    int a =1, rows;
    std::cout << "Enter the rows: " ;
    std::cin >> rows;

    for(int i = 1; i<= rows; i++){
        for(int j = 1; j<=i; j++){
            std::cout << a << " ";
            a++;
        }
        std::cout<<"\n";
    }
}