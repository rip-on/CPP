#include <iostream>

int main()
{
    int i, n, s=0;
    using namespace std;

    cout << "Enter the value of n: ";
    cin >> n;

    while(i <= n){
        s = s + i;
        i++;
    }
    cout << "The sum of the Series: " << s;
    return 0;
}