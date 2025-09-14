#include <iostream>

// int main(){
//     using namespace std;

//     int number;

//     while(number < 0){
//         cout << "Enter a positive #: ";
//         cin >> number;
//     }

//     cout << "The # is: " << number;

//     return 0;
// }

//The output is = The # is: 0

// The defaulting value is zero without an input

// int main(){
//     using namespace std;

//     int number;

//     cout << "Enter a positive #: ";
//     cin >> number;

//     while(number < 0){
//         cout << "Enter a positive #: ";
//         cin >> number;
//     }

//     cout << "The # is: " << number;

//     return 0;
// }

//Although it's not best practice

int main(){
    int number;
    using namespace std;

    do{
        cout << "Enter a positive #: ";
        cin >> number;
    }while(number < 0);

    cout << "The # is: " << number;

    return 0;
}