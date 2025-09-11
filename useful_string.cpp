#include <iostream>

int main()
{
    using namespace std;
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // if(name.length()>12){
    //     cout << "Your name can't be over 12 characters\n";
    // }
    // else{
    //     cout << "Welcome " << name;
    // }

    // if(name.empty()){
    //     cout << "You did'nt enter your name";
    // }
    // else{
    //     cout << "Welcome " << name;
    // }
    

    //name.clear() --> which clears user input
    //name.clear();

    name.append("@gmail.com");
    cout << "Hello " << name << endl;//Hello RIPON@gmail.com
    cout << name.at(1) << endl;//in case of RIPON it's I

    //name.insert(0, "@");
    
    //cout << name <<"\n"; //@RIPON@gmail.com

    cout << name.find(' ') << "\n"; //6 for Jahid Hasan

    cout << name.erase(0,6); //excluding space bar
    
    return 0;
}