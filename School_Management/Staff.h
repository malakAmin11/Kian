#ifndef STAFF_H
#define STAFF_H
#include <Person.h>
#include <iostream>

using namespace std;


class Staff:public Person
{
private:
    string role;
    int salary;
public:
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    string getrole()
    {
        return role;
    }
    int getSalary()
    {
        return salary;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please enter your role: "<<endl;
        cin>>role;
        cout<<"Please enter your salary: "<<endl;
        cin>>salary;
    }
    void print()
    {
        Person::print();
        cout<<"The role is: "<<role<<endl;
        cout<<"The salary is: "<<salary<<endl;
    }

};

#endif // STAFF_H
