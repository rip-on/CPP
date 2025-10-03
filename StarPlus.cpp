#include <iostream>

using namespace std;

int main()
{
    int n;
    
    int mid = n/2 + 1;
    cout << "Enter the value of rows: ";
    cin >> n;
   
      for(int i = 1; i <= n; i++){
        for(int j = 1; j<=n; j++){
            if(i==mid || j==mid)
                cout << "$ ";
            
            else
                cout << " ";
            
        }
          cout << endl;
    }

  
    
}