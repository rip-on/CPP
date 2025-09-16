#include <iostream>

int main()
{
    int i, n, s=0;
    using namespace std;

    cout << "Enter the value of n: ";
    cin >> n;

    for(i=1; i<=n; i++){
        s = s + i;
    }
    cout << "The sum of the Series: " << s;
    return 0;
}