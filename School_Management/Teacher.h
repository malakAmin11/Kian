#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <Person.h>

using namespace std;


class Teacher:public Person
{
private:
    string subject;
    int salary;
public:
    void setSubject(string subject)
    {
        this->subject=subject;
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    string getSubject()
    {
        return subject;
    }
    int getSalary()
    {
        return salary;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please enter your subject: "<<endl;
        cin>>salary;
        cout<<"Please enter your salary: "<<endl;
        cin>>salary;
    }
    void print()
    {
        Person::print();
        cout<<"The subject is: "<<subject<<endl;
        cout<<"The salary is: "<<salary<<endl;
    }


};

#endif // TEACHER_H
