#include <iostream>

int main()
{
    int i, n, factorial = 1;
    using namespace std;

    cout << "Enter a #: ";
    cin >> n;

    for(i=1; i<=n; i++){
        factorial *= i;
    }
    cout << "The factorial of the # is: " << factorial;
    return 0;
}