#include <iostream>
#include <string>
using namespace std;

class Teacher
{
// private access modifier 
private:
    double salary;
//public access modifier 
public:
    string name;
    string dept;
    string subject;

    void changedept(string newDept)
    {
        dept = newDept;
    }
    // setter function
    void setsalary(double s)
    {
        salary = s;
    }
//getter function 
    double getsalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "aditya";
    t1.dept = "CSE";
    t1.subject = "OOPS";
    t1.setsalary (40000);
    cout << t1.name  << endl;
    cout << t1.getsalary << endl;
    return 0;
}