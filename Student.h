#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <Person.h>

using namespace std;

class Student:public Person
{
private:
    string gradeLevel;
    float GPA;
public:
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGPA(float GPA)
    {
        this->GPA=GPA;
    }
     string getGredeLevel()
     {
         return gradeLevel;
     }
     float getGPA()
     {
         return GPA;
     }
     void informations()
     {
        Person::informations();
         cout<<"Please enter your grade level: "<<endl;
         cin>>gradeLevel;
         cout<<"Please enter your GPA: "<<endl;
         cin>>GPA;
     }
     void print()
     {
         Person::print();
         cout<<"The grade level is: "<<gradeLevel<<endl;
         cout<<"The GPA  is: "<<GPA<<endl;
     }
};

#endif // STUDENT_H
