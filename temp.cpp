#include <iostream>

int main()
{
    double temp;
    char unit;

    using namespace std;

    cout << "********** Temperature Conversion **********\n";
    cout << "F = Farenheit\n";
    cout << "C = Celsius\n";
    cout << "What unit would you like to convert\n";
    cin >> unit;
    
    if(unit == 'F' || unit == 'f'){
        cout << "Enter the Celsius temperature: \n";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is: " << temp << "F\n";

    }
    else if(unit == 'C' || unit == 'c'){
       cout << "Enter the temperature in Farenheit: ";
       cin >> temp;
        
       temp = (temp - 32) /1.8;
       cout << "Temperature is: " << temp << "C\n";
    
    }
    else{
        cout << "Please only enter in C or F\n";
    }
    cout << "**********************************************";
}