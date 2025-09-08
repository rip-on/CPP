#include <iostream>

int main()
{
    //&&  = check if two conditions are true;
    //|| = check if at least one of two conditions is true;
    //! = reverse the logical state of its operand;

    // int tem;
   
    // std::cout << "Enter the temperature: ";
    // std::cin >> tem;
    

    // if(temp> 0 && temp < 30){
    //     std::cout << "The temperature is good";
    // }
    // else{
    //     std::cout << "The temperature is bad";
    // }
    int temp;
    std::cout << "Enter 2nd TEMP: ";
    std::cin >> temp;
    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is BAD!";
    }
    else{
        std::cout << "The temperature is GOOD!";
    }
    return 0; 
}