#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    char symbol;

    cout << "Enter the rows: ";
    cin >> rows;

    cout << "Enter the columns: ";
    cin >> columns;

    cout << "Enter the symbol: ";
    cin >> symbol;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++){
            cout << symbol <<' ';
        }
        cout << " \n";
    }
    

    
}