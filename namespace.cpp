#include <iostream>

namespace first{
        int x = 5;
    }
    namespace second{
        int x = 10;
    }

int main()
{
    using   namespace first;
    int x = 7;
    //Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.
    std::cout << first::x <<std::endl; //5
    std::cout << x <<'\n';  //7
    std::cout << second::x; //10
}
    
/*
while (using namespace first) then we don't need to mention first::x like that
or only x it will take the value from the local variable.
*/