#include <iostream>
#include <string>

using namespace std;

class Teacher{
    private:
    double salary;
    
    public:
    //by default Private;
    //properties/attributes 
    string name;
    string dept;
    string subject;
    

    //methods // member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Jahid";
    t1.subject = "CSE";
    t1.dept ="Software Engineering";
    t1.setSalary(25000);

    cout << t1.name<<"\n";
    cout << t1.dept;
    cout << t1.getSalary();
    return 0;
}